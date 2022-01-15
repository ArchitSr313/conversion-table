#include <stdio.h>

int main()
{
    int a;
    float num;
    label:
    printf("\nCONVERSION PROGRAM\n Press \n1 for km to miles\n2 for inch to foot\n3 for cm to inch\n4 for pound to kg\n5 for inch to meter\n0 for quit\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("enter the number :\n");
        scanf("%f", &num);
        printf("%f miles\n", num*0.6214);
        goto label;
        
    case 2:
        printf("enter the number :\n");
        scanf("%f", &num);
        printf("%f foot\n", num*0.0833);
        goto label;
        
    case 3:
        printf("enter the number :\n");
        scanf("%f", &num);
        printf("%f inch\n", num*0.3937);  
        goto label;
        
    case 4:
        printf("enter the number :\n");
        scanf("%f", &num);
        printf("%f kg\n", num*0.4535);
        goto label;
        
    case 5:
        printf("enter the number :\n");
        scanf("%f", &num);
        printf("%f meter\n", num*0.0254);
        goto label;
        
    case 0:
        printf("\nthe program is quitting\n");
        break;

    default:
        break;
    }
    
    return 0;
}
