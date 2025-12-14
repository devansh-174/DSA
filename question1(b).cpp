/*
b. Insertion Sort
*/
void insertion_sort(int a[] , int n)
{
for(int i = 0 ; i < n ; i++)
{
    int key = a[i] ;
    int j = i - 1 ; 
    while(j>=0 && a[j] > a[i])
    {
        a[j+1] = a [j] ;
        j-- ;
    }
        a[j+1]= key ;

}
}
