using namespace::std;
main()
{
int NumList [8]=(5,34,32,25,75,42,22,2);
int temp;
cout<<"\n angka sebelum diurutkan :\n";
for(int d=1;d<8;d++){
cout<<setw(3)<<NumList(d);
}
cout<<"\n";
for(int i=0;i<7;i++)
for(int ii=0;ii<7;ii++)
if(NumList[ii]>=NumList[ii+1]){
    temp=NumList[ii]
    NumList[ii]=NumList [ii+1]
    NumList[ii+1]=temp}
    cout<<"angka setelah diurutkan :\n";
    for(int iii=1;iii<8;iii++)
            cout<<"setw(3)"<<NumList[iii]<<endl<<endl;
}

