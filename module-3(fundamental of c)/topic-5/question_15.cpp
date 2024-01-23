// CPP program to find Smallest and largest word in a string//
#include<stdio.h>
#include<String.h>
int minmaxlengthwords (string input,string &minword,string &maxword)

{
  int len=input,length();
  int si=0,ei=0;
  int min_length=len,min_start_index=0;max_length=0,max_start_index=0;
  
  while(ei<=len)
  {
  	if(ei<len && input[ei]!=' ')
  	{
  		eii++;
	  }
	else
	{
		int curr_length=ei-si;
		if(curr_length<min_length)
		{
			min_length=curr_length;
			max_start_index=si;
		}
		ei++;
		si=ei;
	}
	  }	
	minword=input.substr(min_start_index,min_length);
	maxword=input.substr(max_start_index,max_length);
}
int main()
{
	string a="my name is vrunda i'm from vaso;"
	string minword,maxword;
	minmaxwordlengthwords(a,minword,maxword);
	
	printf("minimum length word:%s\n",minword);
	printf("maximum length word:%s",maxword);
}
