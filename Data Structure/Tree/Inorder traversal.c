#include<stdio.h>
struct node{
    int data;
    struct node*left;
    struct node*right;
};
struct node*creat()
{
    int x;
    struct node*nwep=malloc(sizeof(struct node));
    printf("Enter Data , -1 For No node ");
    scanf("%d",&x);
    if(x==-1)
    {
        return 0;
    }
    nwep->data=x;
    printf("Enter The Left Child of %d",x);
    nwep->left=creat();
    printf("Enter The Riht Child of %d",x);
    nwep->right=creat();
    return nwep;
}
void in_order(struct node*root)
{
    if(root==0)
    {
        return;
    }
    in_order(root->left);
    printf("%d ",root->data);
    in_order(root->right);
}
int main()
{
    struct node*root;
    root=creat();
    in_order(root);
    return 0;
}
