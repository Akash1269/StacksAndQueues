//#include<stdio.h>
//#include<conio.h>
void initialize(q *ptr)
{
    ptr->f=0;
    ptr->r=-1;
    ptr->count=0;
}

sc push(q *ptr,int d)
{
    sc flag=SUCCESS;
    if(((ptr->r)+1)%SIZE==ptr->f&&((ptr->r)!=-1))
    {
        flag=FAIL;
    }
    else
    {
        ptr->r=((ptr->r)+1)%SIZE;
        ptr->list[ptr->r]=d;
        (ptr->count)++;
    }
    return flag;
}

sc pop(q *ptr,int *dptr)
{
    sc flag=SUCCESS;
    if(ptr->count==0)
    {
        flag=FAIL;
    }
    else
    {
        *dptr=ptr->list[ptr->f];
        ptr->f=((ptr->f)+1)%SIZE;
        (ptr->count)--;
        if(ptr->count==0)
             initialize(ptr);
    }
    return flag;
}

/*
main()
{
    int c,d;
    sc flag;
    q s;
    initialize(&s);
    abc:printf("enter choice\n1.push\n2.pop\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:{printf("enter element\n");
                scanf("%d",&d);
                flag=push(&s,d);
                if(flag==SUCCESS)
                printf("success\n");
                else
                printf("fail\n");
                break;}
        case 2:{flag=pop(&s,&d);
                
                if(flag==SUCCESS)
                {
                    printf("success\n");
                    printf("\nremoved element  %d\n",d);
                }
                else
                printf("fail\n");
                break;}
        default:{printf("wrong");}
    }
    goto abc;
    getch();
}*/
