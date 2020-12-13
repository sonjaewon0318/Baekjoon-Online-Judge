#include<bits/stdc++.h>
main(){int d[50001],i,j,n;for(i=1;i<50001;i++){d[i]=4;for(j=1;j*j<=i;j++)d[i]=std::min(d[i],d[i-j*j]+1);}std::cin>>n;std::cout<<d[n];}
