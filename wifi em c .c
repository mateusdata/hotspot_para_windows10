#include <stdio.h>
int main(){
    char encerar[4];
	system("netsh wlan set hostednetwork mode=allow ssid=mateus key=mmmmmmmm");
	system("NETSH WLAN start hostednetwork\n");
	system("cls");
	system("color 2f");
	printf("\nRede criada com sucesso...\n");
	printf("Deseja encerar a rede:\n");
	fgets(encerar,4,stdin);
	if(strcmp(encerar,"sim")==0 || strcmp(encerar,"SIM")==0){
		system("color 4f");
		system("NETSH WLAN stop hostednetwork");
		system("cls");
		printf("\nRede finalizada...\n");

	}
	else{
		system("cls");
		system("color 2f");
		printf("\nRede criada com sucesso...\n\n");
		printf("Deseja encerar a rede:\n");
	}
	system("pause");
}
