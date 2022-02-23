#include <stdio.h>

int main()
{
    int marks, N,MM;
    printf("Enter the number of subjects: ");
    scanf("%d", &N);
    printf("Enter Maximum Marks of a Subject: ");
    scanf("%d",&MM);
    
    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
        printf("Subject%d: ", i);
        scanf("%d", &marks);
        sum = sum + marks;
    }
    printf("Total Obtainted marks = %d\n",sum);
    printf("Maximum Total Marks = %d\n",N*MM);
    float percent=sum/(float)(N*MM)*100;
    printf("You have secured %f%%",percent);

        return 0;
}