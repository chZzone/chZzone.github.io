#include <stdio.h>
//1000
/*
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",a+b);
    return 0;
}
//18108
int main(){
    int year;
    scanf("%d",&year);
    if(year>=1000 & year<=3000){
        printf("%d",year-543);
    }
    return 0;
}

//3003
int main(){
    int k=1,q=1;
    int l=2,bi=2,n=2;
    int p=8;
    int a,b,c,d,e,f;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    if (a!=k | b!=q | c!=l | d!=bi | e!=n | f!=p){
        k-=a;
        q-=b;
        l-=c;
        bi-=d;
        n-=e;
        p-=f;
    }
    printf("%d %d %d %d %d %d",k,q,l,bi,n,p);
}

//1330
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        printf(">");
    } else if(a<b){
        printf("<");
    } else printf("==");
}
//2753
int main(){
    int year;
    scanf("%d",&year);
    if((year%4==0 && year%100!=0) | year%400==0){
        printf("1");
    } else printf("0");
}
//14681
int main(){
    int x,y;
    scanf("%d\n%d",&x,&y);
    if(x!=0 & y!=0){
      if(x>0 & y>0){
        printf("1");
        } else if(x<0 & y>0){
        printf("2");
        } else if(x<0 &y<0){
        printf("3");
        } else if(x>0 & y<0){
        printf("4");
        }  
    }
}
//2739
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1;i<10;i++){
        printf("%d * %d = %d\n", n, i, n*i);
    }
}

//10950
int main(){
    int T;//test case
    int A,B;
    scanf("%d", &T);
    int R[T];
    for(int i=0;i<T;i++){
        scanf("%d %d", &A, &B);
        R[i] = A+B;
    }
    for(int i=0;i<T;i++){
        printf("%d\n",R[i]);
    }
    
}

//8393
int main(){
    int n;
    int r=0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        r+=i;
    }
    printf("%d",r);
}

//25304
int main(){
    int X,N; // total price : X, total number : N
    int a,b; //each price : a, number : b
    int R=0;
    scanf("%d\n%d", &X, &N);
    for(int i=0;i<N;i++){
        scanf("%d %d",&a,&b);
        R += a*b;
    }
    if(X == R){
        printf("Yes");
    } else printf("No");
}
//10807
int main(){
    int n,v;
    int a[100];
    int cnt=0;
    scanf("%d", &n); //integer number
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]); //or a+i도 가능
    }
    scanf("%d", &v);
    for(int i=0;i<n;i++){
        if(a[i] == v){
            cnt+=1;
        }
    }
    printf("%d", cnt);
}

//10871
int main(){
    int N,X;
    int arr[10000];
    scanf("%d %d", &N, &X);
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
        if(arr[i]<X){
            printf("%d ",arr[i]);
        }
    }
}

//10818
int main(){
    int N;
    scanf("%d", &N);
    int arr[N];
    int min=1000001;
    int max=-1000001;
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
        if(min>arr[i]) min=arr[i];
        if(max<arr[i]) max=arr[i];
    }
    printf("%d %d", min, max);
}

//2562
int main(){
    int arr[9];
    int max=0;
    int index;
    for(int i=0;i<9;i++){
        scanf("%d", &arr[i]);
        if(arr[i]>max){
          max=arr[i];
          index=i;  //index
        }    
    }
    printf("%d\n%d",max,index+1);
}

//15596 : 함수 작성
long long sum(int *a, int n){
    long long ans=0;
    for(int i=0;i<n;i++){
        ans += a[i];
    }
    return ans;
}*/

//4673
int sum(int n){

}

    
