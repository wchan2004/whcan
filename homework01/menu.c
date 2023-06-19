#include <stdio.h>
#include <conio.h>
#include <unistd.h>
#include <windows.h>

void clearScreen() {
    system("cls");
}
                  
void print_menu()
{
	printf("                                                                                                             \n");
	printf("                                                                                                             \n");
	printf("                                                                                                             \n");
	printf("                                                                                                             \n");
	printf("         ::::::::      :::     :::::::::: ::::::::::      ::::::::: ::::::::  ::::    ::: ::::::::::         \n");
	printf("        :+:    :+:   :+: :+:   :+:        :+:                  :+: :+:    :+: :+:+:   :+: :+:                \n");
	printf("        +:+         +:+   +:+  +:+        +:+                 +:+  +:+    +:+ :+:+:+  +:+ :+:                \n");
	printf("        +#++:++#++ +#++:++#++: :#::+::#   +#++:++#           +#+   +#+    +:+ +#+ +:+ +#+ +#++:++#           \n");
	printf("               +#+ +#+     +#+ +#+        +#+               +#+    +#+    +#+ +#+  +#+#+# +#+                \n");
	printf("        #+#    #+# #+#     #+# #+#        #+#              #+#     #+#    #+# #+#   #+#+# #+#                \n");
	printf("         ########  ###     ### ###        ##########      ######### ########  ###    #### ##########         \n");
	printf("                                                                                                             \n");
	printf("                                                                                                             \n");
	printf("                                                                                                             \n");
	printf("                                                                                                             \n");
	printf("                                                                                                             \n");
	printf("                                                                                                             \n");
	printf("                                                                                                             \n");
	printf("                                    ===============================                                          \n");
	printf("                                    =                             =                                          \n");
	printf("                                    =       1. Game Start         =                                          \n");
	printf("                                    =                             =                                          \n");
	printf("                                    =       2. Explanation        =                                          \n");
	printf("                                    =                             =                                          \n");
	printf("                                    =       3. Exit               =                                          \n");
	printf("                                    =                             =                                          \n");
	printf("                                    ===============================                                          \n");
	printf("                                                                                                             \n");
	printf("                                                                                                             \n");
	printf("                                                                                                             \n");
}	

int main()
{
	int key;
    int input;
    int  re;
    int  ex;
	int gameover;
	int house;  //스폰지역 선택
	int house2; //스폰지역 선택2
	int house3; //스폰지역 선택3
    int choice;  
	int choice2;
	int choice3;
	int choice4;
	int choice5;
	int choice6;
	int choice7;
	int choice8;
	int choice9;
	int choice10;
	int choice11;
	int choice12;
	int choice13;
	int choice14;
	int choice15;
	int choice16;
	int choice17;
	int choice18;
	int choice19;
	int choice20;
	int choice21;
	int choice22;
	int copy14; //차고 선택 선반____
	int copy15; //차고 선택 캐비넷
	int copy4; //문을 열었을때

	
    while (1)
    {   
		
        print_menu();
        printf("input(1~3)>");
        scanf("%d", &input);
		system("cls");

        if (input == 1)
	  	{
			while (1)
			{
			do {
				printf("                                                                                                            \n");
				printf("                                        20xx 년 어느 날 좀비 바이러스가 퍼졌다                            \n"); 
				printf("                                    다행히 참치캔을 좋아해  참치캔 한 박스를 사둬서                            \n");
				printf("                                           밖에 안 나가고 잘 버틸 수 있었다                                   \n");
				printf("                                             하지만 이제 식량도 바닥이다                                     \n");
				printf("                                하지만 다행인 건 라디오로 안전 구역이 있다는 걸 확인했다                       \n");
				printf("                           집에 있는 건 이제 가망이 없다 어서 짐을 챙겨 안전 구역으로 가야겠다                  \n");
				printf("                                                                                                             \n");
				printf("                                                                                                             \n");
				printf("                                       [스페이스 바 를 눌러 게임을 시작하세요]                              \n");
				printf("                                                                                                             \n");
				printf("                                                                                                             \n");
                    key = getch();
			 system("cls");
                } while (key != ' ');
						printf("[1. 가방을 챙긴다 ]\n\n");
        				printf("선택지를 누르시겠습니까> ");
        				scanf("%d", &house);
						system("cls");
                 if(house == 1) {
                        printf("여행용 가방을 챙겼다. 이제 주방을 가보자.\n\n");
           	 			printf("\033[1;33m[2. 주방을 간다 ]\033[0m\n\n");
            			printf("\033[33m선택지를 누르시겠습니까> ");
            			scanf("%d", &house2);
						system("cls");
				 				 }
                 	if (house2 == 2) {
                		printf("주방에서 참치캔 3개와 스팸 1개, 물 두병을 획득했다. 이제 창고를 가보자.\n\n");
                		printf("\033[1;33m[3. 창고를 간다 ]\033[0m\n\n");
                		printf("\033[33m선택지를 누르시겠습니까> ");
                		scanf("%d", &house3);
						system("cls");
									  }
                 		if (house3 == 3) {
                    		printf("창고에서 예전에 쓰던 야구방망이랑 지도를 찾았다. 하지만 야구방망이는 낡아서 몇 번 쓰면 부서질 거 같다.\n\n");
							printf("\033[1;33m                               [1. 밖으로 나간다 ]                            \033[0m\n\n");
                    		printf("\033[33m선택지를 누르시겠습니까> ");
                    		scanf("%d", &choice);
							system("cls");
                						 }
									if(choice == 1){
										printf("문을 조심스럽게 열었다 문 앞에 좀비 한 마리가 서성이고 있다 어떻게 할까? \n\n");
										printf("\033[1;33m     [1. 야구방망이를 조심스럽게 꺼내 좀비 머리통을 박살 낸다 ]         [2.앉아서 몰래 지나간다 ]         \033[0m\n\n");
										printf("\033[33m선택지를 누르시겠습니까> ");
										scanf("%d", &choice2);
										system("cls");
													}
											if(choice2 == 1){
												printf("당신은 야구 방망이로 좀비를 때려잡았다 하지만 방망이가 부서져 버렸다 \n\n");
												printf("좀비를 잡는 소리에 다른 좀비들이 몰려든다.\n\n");
												printf("당신은 무기가 없어 좀비 때한테 뜯어 먹혔다\n\n");
												printf("\x1b[31m[ Game over ]      \n\n");
												printf("\033[33mGame over 1번을 눌러 다시 시작하세요> "); 
												scanf("%d", &gameover);
												system("cls");  //베드 엔딩
												if(gameover == 1){
                                                   break; 
                                                }
															}
													else if(choice2 == 2){
                                                		printf("당신은 좀비를 피해 몰래 지나갔다.\n\n");
														printf("얼마나 걸었을까 근처 마트가 보였다 들어갈까?\n\n");
														printf("\033[1;33m     [1. 들어간다 ]         [2. 들어가지않는다 ]         \033[0m\n\n");
														printf("\033[33m어떤 선택지를 누르시겠습니까> "); //마트
														scanf("%d", &choice3);
														system("cls");
														 					}
															if(choice3 == 1){
																printf("당신은 마트 문을 조심스럽게 열었다. \n\n");
																printf("하지만 생존자들이 이미 마트를 다 털어간 뒤였고 텅 비어 있었다\n\n");
																printf("다시 가던길이나 가자\n\n");
																printf("저벅 저벅\n\n");  //마트
																printf("좀비를 피해 다니던 중 어느새 저녁이 되었다.\n\n");
																printf("피신처로 삼을 좋은 집이 보인다. 문을 열고 들어갈까? 아님 창문을 열고 들어갈까?\n\n");
																printf("\033[1;33m     [1.물을 연다 ]         [2. 창문을 연다 ]         \033[0m\n\n");
																printf("\033[33m어떤 선택지를 누르시겠습니까> ");
																scanf("%d", &choice4);
																system("cls");
																             }
																	else if(choice3 == 2){
                                                                             printf("다시 가던길이나 가자\n\n");
																			 printf("저벅 저벅\n\n");
																			 printf("좀비를 피해 다니던 중 어느새 저녁이 되었다.\n\n");
																			 printf("피신처로 삼을 좋은 집이 보인다. 문을 열고 들어갈까? 아님 창문을 열고 들어갈까?\n\n");
																			 printf("\033[1;33m    [1.물을 연다 ]         [2. 창문을 연다 ]         \033[0m\n\n");
																			 printf("\033[33m어떤 선택지를 누르시겠습니까> ");
																			 scanf("%d", &choice4); 
																			 system("cls");
																						 }
																			if(choice4 == 1){
																					printf("당신은 문 손잡이를 잡았다 \n\n");
																					printf("하지만 잠겨있다\n\n");
																					printf("창문을 열어보자\n\n");           //문을 열었을때
																					printf("\033[1;33m    [1. 창문을 연다]         \033[0m\n\n");
																					printf("\033[33m선택지를 누르시겠습니까> ");
																					scanf("%d", &copy4);
																					system("cls");
																			               }
																	else if(choice4 == 2){
                                                                             printf("창문은 열려있었다 당신은 조심스럽게 들어간다.\n\n");
																			 printf("집은 캄캄해서 아무것도 안보인다 무엇을 할까?\n\n");  //창문을 열었을때
																			 printf("\033[1;33m    [1. 거실을 확인한다 ]         \033[0m\n\n");
																			 printf("\033[33m선택지를 누르시겠습니까> ");
																			 scanf("%d", &choice5);
																			 system("cls");
																						  }
																			if(copy4 == 1){
																				printf("다행히 창문은 열려있었다 당신은 조심스럽게 들어간다.\n\n");
																				printf("집은 캄캄해서 아무것도 안보인다 무엇을 할까?\n\n");
																				printf("\033[1;33m    [1. 거실을 확인한다 ]         \n\n");
																				printf("\033[33m선택지를 누르시겠습니까> ");
																				scanf("%d", &choice5);
																				system("cls");
																							}
																					       if(choice5 == 1){
																									 printf("다행히 거실에는 아무도 없었다.\n\n");
																									 printf("하지만 핏자국이 보인다\n\n");
																									 printf("조심해야겠다 당신은 방망이들 들었다\n\n");
																									 printf("주방을 확인해 보자.\n\n");     //주방확인
																									 printf("\033[1;33m    [1. 주방을 확인한다 ]         \033[0m\n\n");
																									 printf("\033[33m선택지를 누르시겠습니까> ");
																									 scanf("%d", &choice6);
																									 system("cls");
																						                   }
																									if(choice6 == 1){
																										 printf("다행히 주방에는 아무도 없었다.\n\n");
																										 printf("주방에서 고등어 통조림 1개와 술을 발견했다. 가방에 통조림 1개와 술을 넣는다\n\n");
																										 printf("1층에는 아무도 없는거 같다. 2층을 확인해 보자.\n\n");
																										 printf("\033[1;33m    [1. 2층을 확인해 보자 ]         \033[0m\n\n"); //2층감
																										 printf("\033[33m선택지를 누르시겠습니까> ");
																										 scanf("%d", &choice7);
																									     system("cls");
																													}
																											if(choice7 == 1){
																													printf("2층에 올라왔다.\n\n");
																													printf("?!\n\n");
																													printf("갑자기 어둠속에서 좀비가 튀어나왔다.\n\n");         //좀비나옴 
																													printf(" 좀비가 덮치려 한다\n\n");
																													printf("\033[1;33m    [1. 왼쪽으로 피한다 ]    [2. 오른쪽으로 피한다 ]       \033[0m\n\n");
																													printf("\033[33m어떤 선택지를 누르시겠습니까> ");
																													scanf("%d", &choice8);
																													system("cls");
																											                }
																												  if(choice8 == 1){
																													    printf("다행히 무사히 피했다.\n\n");
																														printf("야구방망이를 들어 좀비의 머리를 부셔버렸다.\n\n");
																														printf("좀비를 처리했지만 야구방망이가 부서져 버렸다\n\n");
																														printf("좀비 시체를 뒤져 손도끼를 손에 넣었다.\n\n");      //좀비나옴 선택1
																														printf("\033[1;33m    [1. 2층 침실을 살펴 본다 ]    \033[0m\n\n");
																														printf("\033[33m선택지를 누르시겠습니까> ");
																														scanf("%d", &choice9);
																														system("cls");
																												                  }
																												    else if(choice8 == 2){
                                                                                                                         printf("하지만 피하지 못했다.\n\n");
																														 printf("좀비가 물려고 했지만 다행이 야구 방망이로 막았다\n\n");
																														 printf("야구방망이로 힘겹게 좀비를 죽였다.\n\n");
																														 printf("힘들게 좀비를 처리했지만 야구방망이가 부서져 버렸다\n\n");
																														 printf("좀비 시체를 뒤져 손도끼를 손에 넣었다.\n\n");                    //좀비나옴 선택2
																														 printf("\033[1;33m    [1. 2층 침실을 살펴 본다 ]    \033[0m\n\n");
																														 printf("\033[33m선택지를 누르시겠습니까> ");
																														 scanf("%d", &choice9);
																														 system("cls");
																													       			     }
																															  if(choice9 == 1){
																																	printf("침대에 앉았다.\n\n");
																																	printf("당신은 피곤하고 배가 고파 가방을 열었다.\n\n");
																																	printf("\033[1;33m    [1. 참치캔을 하나 먹는다. ]    [2. 고등어 통조림을 하나 먹는다. ]\033[0m\n\n");
																																	printf("\033[33m어떤 선택지를 누르시겠습니까> ");              //밥 선택
																																	scanf("%d", &choice10);                                     
																																	 system("cls");
																															                  }
																																			  if(choice10 == 1){
																																						printf("당신은 참치캔을 먹고 허기를 채웠다.\n\n");
																																						printf("침대에 누워 잠을 청했다.\n\n");
																																						printf("z.\n\n");
																																						printf("zz.\n\n");            //밥 선택1 
																																						printf("zzz.\n\n");
																																						printf("\033[1;33m    [1. 일어난다. ]             \033[0m\n\n");
																																						printf("\033[33m선택지를 누르시겠습니까> ");
																																						scanf("%d", &choice11);                                     
																																	 					system("cls");                    
																																			                   }              
																																			else if(choice10 == 2){
																																						printf("고등어 통조림을 먹고 허기를 채웠다.\n\n");
																																						printf("침대에 누워 잠을 청했다.\n\n");
																																						printf("z.\n\n");
																																						printf("zz.\n\n");          //밥 선택2
																																						printf("zzz.\n\n");
																																						printf("\033[1;33m    [1. 일어난다. ]             \033[0m\n\n");
																																						printf("\033[33m선택지를 누르시겠습니까> ");
																																						scanf("%d", &choice11);                                     
																																	 					system("cls");                         
																																			                       }
																																								   if(choice11 == 1){
																																												printf("당신은 일어나서 주차장을 확인하러 확인하러 갔다\n\n");
																																												printf("당신은 차고에서 괜찮아 보이는 승용차 한 대를 발견했다.\n\n");
																																												printf("\033[1;33m    [1. 차 상태를 확인한다.]      [2. 무슨 차야 튼튼한 다리가 있잖아. ]       \033[0m\n\n");
																																												printf("\033[33m어떤 선택지를 누르시겠습니까> ");                        //차고 감
																																												scanf("%d", &choice12);
																																												system("cls");
																																								                    }
																																												 if(choice12 == 1){
																																													printf("당신은 차 상태를 확인했다.\n\n");
																																													printf("차는 기름만 없을뿐 부품이나 엔진 상태는 괜찮았다 기름만 찾으면 차를 타고 이동할 수 있겠다.	\n\n");
																																													printf("\033[1;33m    [1. 가방에서 지도를 꺼내서 본다. ]  \033[0m\n\n");              //차 탐
																																													printf("\033[33m선택지를 누르시겠습니까> ");             
																																													scanf("%d", &choice13);
																																													system("cls");
																																												                  }
																																											    else if(choice12 == 2){
																																													printf("당신은 안전구역까지 걸어가는걸 택했다..\n\n");
																																													printf("저벅 저벅\n\n");
																																													printf("식량이 떨어져 간다.\n\n");
																																													printf("...\n\n");
																																													printf("당신은 좀비 무리를 보았다.\n\n");         //베드 엔딩
																																													printf("그 수는 30마리가 훨씬 넘어 보인다\n\n");
																																													printf("당신은 도망치려 했지만 계속 걸었던 탓인가 체력이 떨어져 결국 잡히고 말았다.\n\n");
																																													printf("\x1b[31m[ Game over ]      \n\n");
																																													printf("\033[33mGame over 1번을 눌러 다시 시작하세요> "); 
																																													scanf("%d", &gameover);
																																													system("cls");  
																																													break;
																																												                      }
																																																	if(choice13 == 1){
																																																		printf("당신은 지도를 확인했다 근처에 주유소가 있다는 걸 발견했다.\n\n");
																																																		printf("기름통을 들고 주유소로 가자\n\n");
																																																		printf("기름통을 찾아보자.\n\n");
																																																		printf("\033[1;33m    [1. 차고 옆에 있는 선반을 확인한다. ] \033[0m\n\n");
																																																		printf("\033[33m어떤 선택지를 누르시겠습니까> "); //차고 선택
																																																		scanf("%d", &copy14);
																																																		system("cls");
																																																					}
																																																	if(copy14 == 1){
																																																		printf("당신은 차 옆에 있던 선반을 확인했다.\n\n");
																																																		printf("선반에는 아무것도 없었다\n\n");
																																																		printf("캐비넷을 확인해보자\n\n");
																																																		printf("\033[1;33m   [2. 캐비넷을 확인한다. ]  \033[0m\n\n");
																																																		printf("\033[33m어떤 선택지를 누르시겠습니까> "); //차고 선택
																																																		scanf("%d", &copy15);
																																																		system("cls");
																																																					}
																																																	if(copy15 == 2){
																																																		printf("당신은 캐비넷을 열었다\n\n");
																																																		printf("그 안에는 자동차 수리도구가 있었다 하지만 쓸모가 없어 보인다.\n\n");
																																																		printf("이번에는 자동차 트렁크를 열어보자\n\n");
																																																		printf("\033[1;33m   [3. 자동차 트렁크를 열어본다. ]\033[0m\n\n");
																																																		printf("\033[33m어떤 선택지를 누르시겠습니까> "); //차고 선택
																																																		scanf("%d", &choice14);
																																																		system("cls");
																																																					}
																																												                    if(choice14 == 3){
																																																		printf("당신은 자동차 트렁크를 열어보았다.\n\n");
																																																		printf("트렁크 안에는 담배와 라이터 기름통이 있다.\n\n");
																																																		printf("당신은 모두 챙겨서 주유소로 향했다.\n\n");
																																																		printf("\033[1;33m    [1. 주유소까지 걸어간다 ]  \033[0m\n\n");
																																																		printf("\033[33m선택지를 누르시겠습니까> ");     //트렁크 올바른 선택
																																																		scanf("%d", &choice15);
																																																		system("cls");
																																																	                    }
																																																					if(choice15 == 1){
																																																						printf("당신은 무사히 주유소 앞에 있는 건물까지 도착했다.\n\n");
																																																						printf("앞에 주유소가 있다\n\n");
																																																						printf("\033[1;33m    [1. 주유소 살펴보기]  \033[0m\n\n");
																																																						printf("\033[33m선택지를 누르시겠습니까> ");       //주유소 도착
																																																						scanf("%d", &choice16);
																																																						system("cls");
																																																									 }
																																																									  if(choice16 == 1){
																																																											printf("주유소에 좀비 2마리가 있다는걸 확인했다.\n\n");
																																																											printf("주유소 앞에 도로에 좀비 1마리가 있다는걸 확인했다.\n\n");
																																																											printf("손도끼로 한 마리씩 처리하면 충분해 보인다 우선 도로에 있는 좀비부터 처리하자.\n\n");
																																																											printf("\033[1;33m    [1. 손도끼를 들고 도로로 간다.]  \033[0m\n\n");
																																																											printf("\033[33m선택지를 누르시겠습니까> ");       //주유소 도착
																																																											scanf("%d", &choice17);
																																																											system("cls");
																																																									  				   }
																																																													if(choice17 == 1){
																																																														printf("도로에 있던 좀비가 당신을 보고 당신쪽으로 오기 시작했다\n\n");
																																																														printf("당신은 좀비쪽으로 가 좀비목에 팔을 대서 좀비가 못오게 막았다\n\n");
																																																														printf("도끼로 좀비 머리를 찍어 처리했다.\n\n");          //도로 좀비
																																																														printf("그 소리를 듣고 주유소에 있던 좀비 한 마리가 반응했다\n\n");
																																																														printf("좀비가 다가오고 있다 무엇을 할까?\n\n");
																																																														printf("\033[1;33m    [1.손도끼를 좀비 머리쪽에 던진다.] [2. 좀비를 넘어트린다.] \033[0m\n\n");
																																																														printf("\033[33m어떤 선택지를 누르시겠습니까> ");
																																																														scanf("%d", &choice18);
																																																														system("cls");
																																																													                 }
																																																													          if(choice18 == 1){
																																																																		printf("명중했다 좀비는 그대로 쓰러졌다.\n\n");
																																																																		printf("그 소리를 듣고 주유소에 있던 좀비 한 마리가 반응했다\n\n");;
																																																																		printf("좀비 머리에 꽂혀있던 손도끼를 뽑아 들었다.\n\n");
																																																																		printf("\033[1;33m    [1.가까이 간다. ] \033[0m\n\n");
																																																																		printf("\033[33m선택지를 누르시겠습니까> ");     //손 도끼 던짐
																																																																		scanf("%d", &choice19);
																																																																		system("cls");
																																																															  				   }
																																																	                     									else if(choice18 == 2){
																																																																  printf("좀비는 그대로 쓰러졌다.\n\n");
																																																																  printf("좀비를 밟고 손도끼로 머리를 찍었다.\n\n");   
																																																																  printf("그 뒤에 있던 좀비가 오기 시작했다.\n\n");
																																																																  printf("좀비 머리에 꽂혀있던 손도끼를 뽑아 들었다.\n\n");
																																																																  printf("\033[1;33m    [1.가까이 간다. ] \033[0m\n\n");
																																																																  printf("\033[33m선택지를 누르시겠습니까> ");        //좀비 넘어트림
																																																																  scanf("%d", &choice19);
																																																																  system("cls");   
																																																															                      }
																																																																				  if(choice19){
																																																																					printf("당신은 가까이가 남은 좀비를 처리했다.\n\n");
																																																																					printf("그리고 기름통에 기름을 넣고있다.\n\n");
																																																																					printf("하지만 뒤에서 갑자기 좀비가 튀어나왔다.\n\n");
																																																																					printf("당신은 놀랐지만 손도끼를 꺼내들고 좀비의 머리를 찍어버렸다.\n\n");
																																																																					printf("기름을 다 채운 당신은 무사히 돌아갔다.\n\n");
																																																																					printf("\033[1;33m    [1. 게속하기 ] \033[0m\n\n");
																																																																					printf("\033[33m선택지를 누르시겠습니까> ");       //좀비 처리 및 기름 채움
																																																																					scanf("%d", &choice20);
																																																																					system("cls");
																																																																				              }
																																																																							if(choice20 == 1){
																																																																									printf("당신은 차에 기름을 넣고 안전지대로 향했다.\n\n");
																																																																									printf("가는 도중 고속도로가 나왔다.\n\n");
																																																																									printf("지도를 보니 안전지대까지 거의 다왔다 이 고속도로만 빠져 나오면 안전지대다.\n\n");
																																																																									printf("버려져 있는 자동차들을 피해 가던 중 좀비가 모여있는 걸 발견했다.\n\n");
																																																																									printf("무슨 일 인지 확인해야겠다\n\n");
																																																																									printf("\033[1;33m    [1. 확인해 본다 ] \033[0m\n\n");
																																																																									printf("\033[33m선택지를 누르시겠습니까> ");
																																																																									scanf("%d", &choice21);
																																																																									system("cls");
																																																																							                 }
																																																																							      if(choice21 == 1){
																																																																										printf("살펴본 결과 생존자 무리가 좀비들이 너무 많아 차 위에서 대피하고 있었다.\n\n");
																																																																										printf("마침 라이터와 술이 있어 화염병을 만들 수 있다. 화염병이라면 다 처리할 수 있다 도와줄까?\n\n");
																																																																										printf("\033[1;33m    [1. 도와주지않는다 미끼로 쓰고 이틈에 빨리 가자.]                 [2. 도와주자.]              \033[0m\n\n");
																																																																										printf("\033[33m어떤 선택지를 누르시겠습니까> ");
																																																																										scanf("%d", &choice22);
																																																																										system("cls");
																																																																											        }
																																																																										   if(choice22 == 1){
																																																																												printf("당신은 생존자들을 미끼로 쓰고 그곳을 벗어났다\n\n");
																																																																												printf("고속도로를 지나 라디오로 들었던 안전지대에 도착했다.\n\n");
																																																																												printf("당신은 안전지대문을 열었다\n\n");
																																																																												printf("그곳에는 좀비들뿐 사람들은 없었다.\n\n");
																																																																												printf("수백마리의 좀비가 당신을 쫓았다.\n\n");
																																																																												printf("\x1b[31m[ 노말엔딩 ]      \n\n");
																																																																												printf("\033[33m1번을 눌러 게임을 나가세요.> "); 
																																																																												scanf("%d", &gameover);
																																																																												system("cls");  //노말 엔딩
																																																																												break;
																																																																										                    }
																																																																											else if(choice22 == 2){
																																																																												printf("당신은 화염병으로 좀비들을 죽여 생존자들을 구해 주었다\n\n");
																																																																												printf("생존자들은 고맙다고 했다. 당신은 안전지대에 갈껀데 같이 가겠냐고 물었다.\n\n");
																																																																												printf("하지만 생존자들은 그 곳은 이미 좀비들한테 점령당한지 오래 라고 말했다.\n\n");
																																																																												printf("그리고 생존자들은 휘파람을 불었다. \n\n");
																																																																												printf("그러자 버려진 차들 옆에서 사람들이 나와 내게 총을 겨누웠다.\n\n");
																																																																												printf("\x1b[31m[ 진 엔딩 ]      \n\n");
																																																																												printf("\033[33m1번을 눌러 게임을 나가세요.> "); 
																																																																												scanf("%d", &gameover);
																																																																												system("cls");  //진 엔딩
																																																																												break;
																																																																										                    }      
																																																																					
																																																
																																												

																																		 


																					
            }
		}
        else if (input == 2)
        {
            while (1)
            {
    				printf("                                                                                                             \n");
					printf("                                                                                                             \n");
					printf("                                                                                                             \n");
					printf("                                                                                                             \n");
					printf("         ::::::::      :::     :::::::::: ::::::::::      ::::::::: ::::::::  ::::    ::: ::::::::::         \n");
					printf("        :+:    :+:   :+: :+:   :+:        :+:                  :+: :+:    :+: :+:+:   :+: :+:                \n");
					printf("        +:+         +:+   +:+  +:+        +:+                 +:+  +:+    +:+ :+:+:+  +:+ :+:                \n");
					printf("        +#++:++#++ +#++:++#++: :#::+::#   +#++:++#           +#+   +#+    +:+ +#+ +:+ +#+ +#++:++#           \n");
					printf("               +#+ +#+     +#+ +#+        +#+               +#+    +#+    +#+ +#+  +#+#+# +#+                \n");
					printf("        #+#    #+# #+#     #+# #+#        #+#              #+#     #+#    #+# #+#   #+#+# #+#                \n");
					printf("         ########  ###     ### ###        ##########      ######### ########  ###    #### ##########         \n");
					printf("                                                                                                             \n");
					printf("                                                                                                             \n");
					printf("                                                                                                             \n");
					printf("                                                                                                             \n");
					printf(" ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: \n");
					printf("                                                                                                             \n");
					printf("                          This game is a text-based survival exploration game                                \n");
					printf("              with the goal of safely arriving in a safe zone according to the given options.                \n");
					printf("                                                                                                             \n");
					printf(" ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: \n");
					printf("                                                                                                             \n");
					printf("                                                                                                             \n");
					printf("                                              Return to menu?                                                \n");
					printf("                                                                                                             \n");
					printf("                                      ===============================                                        \n");
					printf("                                      =   1. yes            2. no   =                                        \n");
					printf("                                      ===============================                                        \n");
					printf("                                                                                                             \n");
					printf("                                                                                                             \n");
					printf("                                                                                                             \n");
                	printf("input(1~2)>");
                	scanf("%d", &re);
					system("cls");
                if (re == 1)
                {
                    break; // 메뉴로 돌아가기
                }
            }
        }
        	else if (input == 3)
        {
    				printf("                                                                                                             \n");
					printf("                                                                                                             \n");
					printf("                                                                                                             \n");
					printf("                     ######                                                                                  \n");
					printf("                     #     #  ####     #   #  ####  #    #    #    #   ##   #    # #####                     \n");
					printf("                     #     # #    #     # #  #    # #    #    #    #  #  #  ##   #   #                       \n");
					printf("                     #     # #    #      #   #    # #    #    #    # #    # # #  #   #                       \n");
					printf("                     #     # #    #      #   #    # #    #    # ## # ###### #  # #   #                       \n");
					printf("                     #     # #    #      #   #    # #    #    ##  ## #    # #   ##   #                       \n");
					printf("                     ######   ####       #    ####   ####     #    # #    # #    #   #                       \n");
					printf("                                                                                                             \n");
					printf("                       #####  ####     ###### #    # # #####    ##### #    # ######                          \n");
					printf("                         #   #    #    #       #  #  #   #        #   #    # #                               \n");
					printf("                         #   #    #    #####    ##   #   #        #   ###### #####                           \n");
					printf("                         #   #    #    #        ##   #   #        #   #    # #                               \n");
					printf("                         #   #    #    #       #  #  #   #        #   #    # #                               \n");
					printf("                         #    ####     ###### #    # #   #        #   #    # ######                          \n");
					printf("                                                                                                             \n");
					printf("                                                                  #####                                      \n");
					printf("                                      ####    ##   #    # ###### #     #                                     \n");
					printf("                                     #    #  #  #  ##  ## #            #                                     \n");
					printf("                                     #      #    # # ## # #####     ###                                      \n");
					printf("                                     #  ### ###### #    # #         #                                        \n");
					printf("                                     #    # #    # #    # #                                                  \n");
					printf("                                      ####  #    # #    # ######    #                                        \n");
					printf("                                                                                                             \n");
					printf("                                                                                                             \n");
					printf("                                      ===============================                                        \n");
					printf("                                      =   1. yes            2. no   =                                        \n");
					printf("                                      ===============================                                        \n");
					printf("                                                                                                             \n");
  					printf("                                                                                                             \n");
           		 	printf("input(1~2)>");
            		scanf("%d", &ex);
					system("cls");

            if (ex == 1)
            {
                printf("게임을 종료합니다.\n");
                return 0; // 프로그램 종료
            }
        }
    }

    return 0;
	}
            
