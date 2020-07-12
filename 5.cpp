struct M {
    int* mas;
    int current;
    int stepen;
    int size;
    int x;
    int mnogochlen();
    M(int n) {
        mas=new int[n];
        current=0;
        size=n;
    }
    int mnogochlen(int* mas,int n,int stepen) {
        for(int i=0;i<n;i++) {
            return mas[i]*x^stepen+mas[i+1]*x^(stepen-i);
        }
        ~M(){
            cout<<"end"<<endl;
            delete[] mas;
        }
    };

int main() 
{
    M v(4);
    int arr[4]={1,4,5,8};
    cout<<v.mnogochlen(arr,4,3);
    return 0;
}
