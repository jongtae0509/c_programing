// 가위바위보 게임에서 투자할 돈 넣고  잔액 보이기 (종료조건 넣기)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));	//	완전한 난수 생성을 위한 코드 
	int rsp,bet,player,cnt=0,win=0,lose=0,draw=0;	// 사용할 변수 선언 
	int money = 500;	//소지금 변수 선언 500원으로 시작 
	printf("컴퓨터와 가위바위보 게임을 시작합니다.\n");
	printf("가위바위보는 돈이 다 떨어지거나 소지금이 5000원이 넘을때까지  진행됩니다.\n");
	printf("매 턴마다 플레이어는 가위, 바위, 보 중 하나를 낼 수 있으며 베팅을 할 수 있습니다.\n");
	printf("베팅을 하면 베팅을 한 만큼 소지금에서 차감됩니다.\n");
	printf("소지금은 500원으로 시작되며 승리시 베팅금의 두배, 비길시 베팅금액, 패배시 0원을 획득합니다.\n");
	printf("과연 500원을 5000원으로 불릴 수 있을까요?\n\n");
	
	while(1){	// 일단 무한반복 
		// 가위 바위 보를 입력받는 반복문 
		while(1){
			printf("현재 돈 : %d\n1.가위 2.바위 3.보를 입력하세요 : ",money);
			scanf("%d",&player);
			if(player>3||player<1){
				printf("잘못된 입력입니다. 다시 입력해주세요\n");
				continue;
			}
			break;
		}
		// 베팅할 돈을 입력받는 반복문 
		while(1){
			printf("현재 돈 : %d 베팅할 돈을 입력하세요 : ",money);
			scanf("%d",&bet);
			if(money-bet<0){
				printf("베팅할 돈이 현재 돈보다 큽니다. 다시 입력해주세요\n");
				continue; 
			}	
			break;
		}
		money -= bet;	// 소지금에서 베팅할 금액을 일단 차감한다 
		rsp = rand()%3+1;	// 컴퓨터가 낼 가위 바위 보를 난수로 변수에 저장 1.가위 2.바위 3.보 
		if(player==1){	// 플레이어 가위 
			if(rsp==2){	// 컴퓨터 바위 
				printf("컴퓨터가 바위를 내서 패배했습니다. ");
				lose++;
			}
			else if(rsp==1){	// 컴퓨터 가위 
				printf("컴퓨터가 가위를 내서 비겼습니다. ");
				money += bet;
				draw++;
			}
			else{	// 컴퓨터 보 
				printf("컴퓨터가 보를 내서 승리했습니다. ");
				money += bet*2;
				win++;
			}
		}
		else if(player==2){	// 플레이어 바위 
			if(rsp==3){	// 컴퓨터 보 
				printf("컴퓨터가 보를 내서 패배했습니다. ");
				lose++;
			}
			else if(rsp==2){	// 컴퓨터 바위 
				printf("컴퓨터가 바위를 내서 비겼습니다. ");
				money += bet;
				draw++;
			}
			else{	// 컴퓨터 가위 
				printf("컴퓨터가 가위를 내서 승리했습니다. ");
				money += bet*2;
				win++;
			}
		}
		else if(player==3){	// 플레이어 보 
			if(rsp==1){	// 컴퓨터 가위 
				printf("컴퓨터가 가위를 내서 패배했습니다. ");
				lose++;
			}
			else if(rsp==3){	// 컴퓨터 보 
				printf("컴퓨터가 보를 내서 비겼습니다. ");
				money += bet;
				draw++;
			}
			else{	// 컴퓨터 바위 
				printf("컴퓨터가 바위를 내서 승리했습니다. ");
				money += bet*2;
				win++;
			} 
		}
		cnt++;	// 게임이 몇번 진행되었는지 세주는 변수
		if(money==0||money>=5000) break; 
	}
	
	// 게임 결과 출력하는 부분 
	if(money == 0) printf("\n\n컴퓨터에게 돈을 전부 잃었습니다. ㅜㅜ\n");
	else printf("\n\n컴퓨터에게 승리했습니다! 현재 소지금 : %d\n",money);
	printf("%d판의 전적 : 승리 %d판 , 무승부 %d판, 패배 %d판.\n",cnt,win,draw,lose);
	printf("컴퓨터와의 가위바위보 승률 %.3lf%%",(double)win/(cnt-draw)*100); 
} 
