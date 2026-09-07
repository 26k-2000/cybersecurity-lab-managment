#include <stdio.h>

int main() {

    char lab[50];
    float comp, network, security;
    float comprate, networkrate, softwarecost;
    
    float compcost, networkcost, total;

    printf("Enter Lab Name: ");
    fgets(lab,50,stdin);

    printf("Enter Number of Computers: ");
    scanf("%f", &comp);

    printf("Enter Number of Network Devices: ");
    scanf("%f", &network);

    printf("Enter Number of Security Tools: ");
    scanf("%f", &security);

    printf("Enter Cost per Computer: ");
    scanf("%f", &comprate);

    printf("Enter Cost per Network Device: ");
    scanf("%f", &networkrate);

    printf("Enter Annual Security Software Cost: ");
    scanf("%f", &softwarecost);

    if (comp<0 || comp!=(int)comp || network<0 || network!=(int)network || security<0 || security!=(int)security)
    {
        printf("Number of any kind of device should be a whole number");
        return 1;
    }

    if (comprate<0 || networkrate<0 || softwarecost<0)
    {
        printf("Cost of anything can not be less than zero");
        return 1;
    }
    

    compcost = comp * comprate;
    networkcost = network * networkrate;
    total = compcost + networkcost + softwarecost;


    printf("\n========================================\n");
    printf("       CYBERSECURITY LAB REPORT\n");
    printf("========================================\n\n");

    printf("Labname : ");
    fputs(lab,stdout);
    printf("Computers : %.0f\n", comp);
    printf("Network Devices : %.0f\n",network);
    printf("Security Tools : %.0f\n\n",security);

    printf("Computer Cost : %.2f\n", compcost);
    printf("Network Device Cost : %.2f\n", networkcost);
    printf("Software Cost : %.2f\n\n", softwarecost);
    
    printf("----------------------------------------\n");
    printf("Total Lab Investment : %.2f\n", total);
    printf("----------------------------------------\n\n");
    printf("========================================\n");

    return 0;
}
