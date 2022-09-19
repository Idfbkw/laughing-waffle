void ListInsertSort(SqList *L, DataType x)
{
 int i;
 int pos=1;
 for(i=0;L->items[i]<x;i++)
 {
     pos++;
 }
 for(i=L->length-1;i>=pos-1;i--)
{
 L->items[i+1]= L->items[i];
}
L->items[pos-1]=x;
 L->length++;
 return 1;
}