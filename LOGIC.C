8:- Implement Logic Gate using NOR Gate.

#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[5]={1,0,1,0,1};
int b[5]={0,1,1,0,0};
int i,ans;
clrscr();
for(i=0;i<5;i++){
ans=!(a[i]+b[i]);
printf("\n%d NOR%d=%d",a[i],b[i],ans);
}
getch();
}
Output:-

1 NOR0=0                                                                        
0 NOR1=0                                                                        
1 NOR1=0                                                                        
0 NOR0=1                                                                        
1 NOR0=0                                                                        
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
