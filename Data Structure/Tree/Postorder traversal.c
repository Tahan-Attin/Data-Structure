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
    printf("Enter The Left Child of %d ",x);
    nwep->left=creat();
    printf("Enter The Right Child of %d ",x);
    nwep->right=creat();
    return nwep;
}
void post_order(struct node*root)
{
    if(root==0)
    {
        return;
    }
    post_order(root->left);
    post_order(root->right);
    printf("%d ",root->data);
}
int main()
{
    struct node*root;
    root=creat();
    post_order(root);
    return 0;
}
