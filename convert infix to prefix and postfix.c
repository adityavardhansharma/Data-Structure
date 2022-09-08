#include&lt;stdio.h&gt;

char stack[100];
int top = -1;

void push(char x)
{
stack[++top] = x;
}

char pop()
{
if(top == -1)
return -1;
else
return stack[top--];
}

int priority(char x)
{
if(x == &#39;(&#39;)
return 0;
if(x == &#39;+&#39; || x == &#39;-&#39;)
return 1;
if(x == &#39;*&#39; || x == &#39;/&#39;)
return 2;
return 0;
}

int main()
{

char exp[100];
char *e, x;
printf(&quot;Enter the expression : &quot;);
scanf(&quot;%s&quot;,exp);
printf(&quot;\n&quot;);
e = exp;

while(*e != &#39;\0&#39;)
{
if(isalnum(*e))
printf(&quot;%c &quot;,*e);
else if(*e == &#39;(&#39;)
push(*e);
else if(*e == &#39;)&#39;)
{
while((x = pop()) != &#39;(&#39;)
printf(&quot;%c &quot;, x);
}
else
{
while(priority(stack[top]) &gt;= priority(*e))
printf(&quot;%c &quot;,pop());
push(*e);
}
e++;
}

while(top != -1)
{
printf(&quot;%c &quot;,pop());
}return 0;

}
