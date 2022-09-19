void Del_negative(SqList *L)
{
    int i;
    DataType y;
    for (i=0;i<L->length;i++)
    {
        if(L->items[i]<0)
        {
            SqListDelete(L,i+1,&y);
            i=i-1;
        }
    }
}

