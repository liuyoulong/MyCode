//�������򣺷ָ�:��������ɨ��
#include<iostream>
using namespace std;
int Partition(int arr[],int low,int high);
int main()
{
    const int length=8;
    int arr[length]={49,38,65,97,76,13,27,49};
    cout<<"The position of privot is : "
        <<Partition(arr,0,length-1)<<endl
        <<"After partition :"<<endl;
    for(int i=0;i<length;i++)
        cout<<arr[i]<<' ';
    return 0;
}
int Partition(int arr[],int low,int high)
 {     /* ��������ɨ�� */
    //����������j�ܹ��ߵ���һ����˵��֮ǰ����
    //������(С���������)��Ҳ���ܱ��滻
     const int pivotkey=arr[high];
     int i=low-1,j=low;
     for(;j<high;j++)
     {
         if(arr[j]<pivotkey)
        {
            int tmp=arr[++i];
            arr[i]=arr[j];
            arr[j]=tmp;
        }
     }
    int tmp=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=tmp;
    return i+1;
 }