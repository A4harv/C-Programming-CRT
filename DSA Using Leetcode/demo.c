int main ()
{
    int a[] = {1,2,3,4,5};
    int add = 0, max = 0, min =a[4];
    for(int i = 0; i<5; i++){
        add = add+a[i];
        if(min>a[i]){min=a[i];}
        if(a[i]>max){max=a[i];}
    }
}