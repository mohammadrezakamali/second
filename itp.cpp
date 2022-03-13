
#include <iostream>

#include <time.h>

#include "clui.h"

#include <windows.h>

#include <fstream>

#include <string>

using namespace std;

int row,col,m,t,npp;

int a[20][20];

int MM[20][20];

int ary_save1[20][20];

int ary_save2[20][20];

int ary_save3[20][20];

int ary_save4[20][20];

int ary_save5[20][20];

int count_save,H;

int count_X;

bool flag_wasd_mokhtasat_mohammad,flag_PPP;

int end_game;

void bombcalcuator(int, int, int, int );

void display (int, int );

void display2 (int, int, int, int, int );

void meghdar ();

void meghdar_MM();

void meghdar_ary();

void tozih ();

void darajebazi (int );

void narahatam ();

int khone(int, int );

int ravesh_bazi();

void narahatam2 ();

int entekhab ();

void mohasebe (int, int );

void mohammad_new_game ();

void mohammad_change_name();

void mohammad_load_game();

void mohammad_Leader_board();

void Quit();

void name();

void lotfan();

void tozih_ravesh_bazi();

int tozih_liderboard();

void wasd (int, int, int, int );

void mokhtasat(int, int, int,int );

void tozih2 ();

void edame();

void edame2();

void save1();

void save2();

void save3();

void save4();

void save5();

int save6();

void file_save();

void sorry();

int flag_m1_row();

int flag_m1_col();

void mokhtasat_bomb(int, int, int );

int count_bomb1(int, int, int );

int m1();

int new_col();

int new_row();

void menu(int );

int entekhab_load_game();

int tozih_count_X();

void khodafezi();

void name_new();

void SWAP();


struct game
{
	char NAME[100];
	
	int score; 
	
}GAME[20];

int main()
{

    init_clui();
    
    flag_PPP=false;
    
    count_X=0;
    
    count_save=0;

    char ans;

    ans='y';

    int T,t;
    
    H=0;

    name();

    while(true)
    {
        T=entekhab();

        if((T==1) || (T==2) || (T==3)||(T==4)||(T==5))
        {
            break;
        }

        lotfan();

        //pak kon mikhay;
    }

    menu(T);

    quit();

    return 0;
}

void lotfan()
{
    cout<<"lotfan ba tajoh be tozihat dorost entekhab konid"<<endl;

    cout<<endl;
}

void name()
{
    cout<<"salam be dost aziz , azizam esmeto bego bebinam"<<endl;

    cout<<endl;
    
    cout<<"esme vared shode : ";
    
    cin.getline(GAME[H].NAME,100);
    
    if(GAME[H].NAME[0]=='\0')
    {
    	cin.getline(GAME[H].NAME,100); 
	}


    cout<<endl;
    
    clear_screen();
}

void bombcalcuator(int X,int Y,int ROW,int COL)
{
    int sum,m,n;

    sum=0;

    //cout<<"boobmb";

    //cout<<endl;

    for(int i=X-1; i<=X+1; i++)
    {
        //cout<<"boobmb";

        for(int j=Y-1; j<=Y+1; j++)
        {
            //cout<<"boobmb";

            if(a[i][j]==-9 && i<ROW && j<COL && i>=0 && j>=0)
            {
                sum++;
            }
        }
    }

    if(sum>0)
    {
        a[X][Y]=sum;
    }

    if(sum==0)
    {
        a[X][Y]=0;

        for(int i=X-1; i<X+1; i++)
        {


            for(int j=Y-1; j<Y+1; j++)
            {
                if(a[i][j]==9 && i<ROW && j<COL && i>=0 && j>=0)
                {
                    bombcalcuator(i,j,ROW,COL);
                }
            }
        }
    }



}

void display (int Row, int Col)
{

    //cout<<"mmmmmmmm";

    cout<<endl;

    for(int i=0; i<Row; i++)
    {
        for(int j=0; j<Col; j++)
        {
            cout<<" ----- ";
        }

        cout<<endl;

        for(int j=0; j<Col; j++)
        {

            switch(a[i][j])
            {
            case -9:
                if(end_game==7)
                {
                    cout<<" | "<<"B"<<" | ";
                }
                else
                {
                    cout<<" | "<<"*"<<" | ";
                }
                break;

            case 10:
                cout<<" | "<<"*"<<" | ";
                break;

            case 0:
                cout<<" | "<<" "<<" | ";
                break;

            default:
                cout<<" | "<< a[i][j] <<" | ";

            }
        }

        cout<<endl;
    }
    
    for(int i=0 ;i<col; i++)
    {
    	cout<<" ----- ";
	}
}

void meghdar ()
{
	
    for(int i=0; i<20; i++)
    {
        for(int j=0; j<20; j++)
        {
            a[i][j]=10;
        }
    }
}

void tozih()
{
    cout<<"Salam sevom khob azizam tozih aval bazi ro mikham beht begam bebin aval az hame moshakas kon mikhay chetori bazi koni"<<endl;

    cout<<endl;

    //cout<<" *****rasti rasti man az ghast ye tori barname ro neveshtam ke kamtrin halat baray tedad khone 25 hast***** "<<endl;

    //cout<<endl;

    cout<<"bebin bazi in tori hast ke baray 3 halat 5*5 va 12*12 va 20*20 tedad bomb ha malom hast vali halat hay dige ro khodet vared kon "<<endl;

    cout<<endl;

    cout<<"age dost dari rahat bazi koni lotfan tedad khone hay jadvalet beyen 25 ta 144 khone bashe"<<endl;

    cout<<endl;

    cout<<"age dost dari motevaset bazi koni az 144 ta khone ta 225 ta khone entekhab kon"<<endl;

    cout<<endl;

    cout<<"age sakht mikhay bazi koni az 225 ta 400 entekhab koni sakht mishe"<<endl;

    cout<<endl;

    cout<<"havast bashe ke nahayt tedad khone 400 hast bishtar nemitoni vared koni"<<endl;

    cout<<endl;

    cout<<"rasti bebin man az to miporasm dost dari chand dar chand bashe onja havaset bashe ke mikhay chetori bazi koni"<<endl;

    cout<<endl;

    cout<<"va inam begam lozomi nadare ke hatman moraba shekl bashe"<<endl;

    cout<<endl;

    cout<<"age mikhay rahat bazi koni 1 ro vared kon age motevaset mikhay 2 va aghe sakht 3 ro vared kon"<<endl;

    cout<<endl;

    cout<<"dost dari sakht bazi koni ya motevaset va rahat ?"<<endl;

    cout<<endl;
    
   
}

void darajebazi(int M)
{
    bool flag;

    flag=false;

    if(M==1)
    {
        //pak kon bayad bezaram

        cout<<endl;

        cout<<"khob dost man to sath rahato entekhab kardi be tozihat havaset bashe"<<endl;

        cout<<endl;

        flag=true;
    }

    if(M==2)
    {
        //pak kon bayad bezaram

        cout<<endl;

        cout<<"khob dost man to sath motevaseto entekhab kardi be tozihat havaset bashe"<<endl;

        cout<<endl;

        flag=true;
    }

    if(M==3)
    {
        //pak kon bayad bezaram

        cout<<endl;

        cout<<"khob dost man to sath sakht entekhab kardi be tozihat havaset bashe"<<endl;

        cout<<endl;

        flag=true;
    }

    if(flag==false)
    {
        narahatam();
    }
}

void narahatam()
{
    cout<<"bebin omadi ke nasazi yaaaaa ye bar dige tozih ro bekhon sath ro dorst entekhab kon lotfan :)"<<endl;
}

int khone (int M, int Y)
{
    bool flag;

    flag=false;

    if((M==1 && 25<=Y && 144>Y) || (M==2 && 144<=Y && 225>Y) || (M==3 && Y>=225 && 400>=Y))
    {
        flag=true;

        return 1;
    }

    if(flag==false)
    {
        return 0;
    }

}

void narahatam2 ()
{
    cout<<endl;

    cout<<"bebin nashod ye bar dige bekhon dorst entekhab kon"<<endl;

    cout<<endl;

    cout<<"bebin ba tazajoh be sathi ke entekhab kardi satr va setoneto vared nakardi"<<endl;

    cout<<endl;

    cout<<"ta vaghti ke dorost vared nakoni nemirim marhale badiiiii havaset bashe"<<endl;

    cout<<endl;

    cout<<"alan dobare az to mikham ke satr va seton vared koni aval satr ro vared kon badesh seton"<<endl;

    cout<<endl;

    cout<<"tedad satr mosavi hast ba = ";
}

int entekhab()
{
    char x;

    cout<<"salam baray bar dovom be dost golam bebin menu ro alan dari mibini ";

    cout<<"ba tavajoh be chizi ke mikhay add ro vared kon"<<endl;

    cout<<endl;
    
    change_color_rgb(50, 150, 150);

    cout<<"1-NEW GAME"<<endl;

    cout<<"2-LOAD GAME"<<endl;

    cout<<"3-Change name"<<endl;

    cout<<"4-Leaderboard"<<endl;

    cout<<"5-Quit"<<endl;
    
    reset_color();

    cout<<endl;

    while(true)
    {
        cin>>x;

        if(x=='1' || x=='2' || x=='3' || x=='4' || x=='5')
        {
            break;
        }
        else
        {
            cout<<endl;

            cout<<"bebin dari eshtebah vared mikoni gozine ro ta dorst vared nakoni nemirim marhale badi ya 1 ta5 entekhab kon"<<endl;

            cout<<endl;
        }
    }
    
    clear_screen();
    
    cout<<endl;

    x=x-48;

    return x;

}

void mohammad_new_game()
{
        int n,b,x,y,count,Z,count_bomb,count_e,t_new,Q,P;

        Z=0;
        
        end_game=1000;

        tozih();

        m=m1();

        darajebazi(m);

        row=flag_m1_row();
        
        cout<<endl;

        col=flag_m1_col();

        n=row*col;

        //cout<<" flag_m = "<< flag_m<<endl;

        //cout<<"n ="<<n<<endl;

        Z=khone(m , n);

        //cout<<"Z ="<<Z<<endl;

        if(Z==0)
        {
            while(true)
            {
                narahatam2 ();

                row=new_row();

                edame();

                col=new_col();

                n=row*col;

                Z=khone(m, n);

                if(Z==1)
                {
                    break;
                }

                if(Z==0)
                {
                    cout<<"bebin satr va setoni ke midi ba sath entekhabit nemikhone"<<endl;
                }
            }

            edame2();
        }


        //delay 5s

        //pak kardan

        meghdar();

        t=count_bomb1(m,row,col);
        
        cout<<endl;
        
        //cout<<"t = "<<t;//1

        mokhtasat_bomb(t,row,col);
        
        cout<<endl;
        
        //cout<<"t = "<<t<<endl;//4

        //cout<<endl;

        //pak kon bayad bezaram;************
}

void mohasebe (int X1, int X2)
{
	
	
	cout<<"merci ke bazi kardin"<<endl;
	
	cout<<endl;
	
    if(X1==1)
    {
        cout<<"shoma sateh rahat ra bazi kardin dar in sateh har khane dorost shamel yek emtiyaz ast"<<endl;

        cout<<endl;

        cout<<"pas emtiyaz shoma bara bar ast ba = "<<X2<<endl;

        cout<<endl;
    }

    if(X1==2)
    {
        cout<<"shoma sateh motevaset ra bazi kardin dar in sateh har khane dorost shamel do emtiyaz ast"<<endl;

        cout<<endl;

        cout<<"pas emtiyaz shoma bara bar ast ba = "<<X2*2<<endl;

        cout<<endl;
    }

    if(X1==3)
    {
        cout<<"shoma sateh sakht ra bazi kardin dar in sateh har khane dorost shamel se emtiyaz ast"<<endl;

        cout<<endl;

        cout<<"pas emtiyaz shoma bara bar ast ba = "<<X2*3<<endl;

        cout<<endl;
    }
    
    cout<<endl;
}

int ravesh_bazi()
{
    char ans;
    
    int x;

    //pak kon bezaram in ja

    tozih_ravesh_bazi();

    while(true)
    {
    	cout<<"gozine vared shode mosavi hast ba = ";
    	
        cin>>ans;
        
        cout<<endl;

        if(ans=='1' || ans=='2')
        {
            break;
        }

        cout<<"fekr konam motevajeh nashodin shoma bayad 1 ya 2 vared konid do bare matno be namayesh mizaram"<<endl;

        cout<<endl;

        //pak kon bezaram inja;

        tozih_ravesh_bazi();
    }
    
    clear_screen();
    
    x=ans;
    
    x=x-48;

    return x;
}

void wasd (int ROW, int COL, int m,int t )
{
	
    cout<<"shoma halat estefade az dokme ro entekhab kardin"<<endl;

    cout<<endl;

    cout<<"w ye khone bala mibare "<<endl;

    cout<<endl;

    cout<<"s ye khone payein miyare"<<endl;

    cout<<endl;

    cout<<"d ye khone rast mibare"<<endl;

    cout<<endl;

    cout<<"a ye khone chap mibare"<<endl;

    cout<<endl;

    cout<<"ma dar halat aval roy khane 1 va 1 hastim ke be sorat sabz namayesh dade mishe"<<endl;

    cout<<endl;

    char ans;

    int ans_p;

    char ans2;

    int v,V;

    int c,C;

    int Q,count_e,n,z,count_bad=0,count_save,R;

    bool flag_f,flag_c,flag,flag_b,flag_END,flag_W;

    flag_f=false;

    flag=false;

    flag_b=false;
    
    flag_W=false;
    
    flag_END=false;

    v=0;

    c=0;

    Q=0;

    count_e=0;
    
    count_save=0;

    count_bad=1;

    n=ROW*COL;
    
    npp=n;

    int x[20][20];

    meghdar_MM();

    display2(ROW,COL,v,c,z);

    while(true)
    {

        while(true)
        {
                      // cout<<"count___save************** = "<<count_save<<endl;
                       
            count_bad++;

            scanf("%c", &ans);

            if(ans=='w' ||ans=='a'||ans=='s'||ans=='d'||ans==' '||ans=='F'||ans=='Q'||ans=='O' )
            {
                count_bad=0;
                
                break;
            }

            if(count_bad!=2)
            {
                cout<<"chizi ke vared mikoni eshtebah hasta"<<endl;

                count_bad=1;
            }
        }
        
        cout<<endl;

        count_bad++;

        z=0;

        //pak kardan;
        
        if(ans=='Q')
        {
        	khodafezi();
        	
        	flag_END=true;
		}

        if(ans=='O')
        {
            count_save++;
            
            	count_X++;
	
	            //cout<<"count_X = "<<count_X<<endl;
            
           // cout<<"count_save = "<<count_save<<endl;

            if(count_X==1)
            {
                save1();
                
                cout<<endl;
                
                //cout<<"count_&&&&&&&&save = "<<count_save<<endl;
                
                flag_wasd_mokhtasat_mohammad=true;
                
               // cout<<"count_&&&&&&&&sEEEEEEave = "<<count_save<<endl;
                
                flag_END=true;
            }

            if(count_X==2)
            {
                save2();
                
                flag_wasd_mokhtasat_mohammad=true;
                
                break;
            }

            if(count_X==3)
            {
                save3();
                
                flag_wasd_mokhtasat_mohammad=true;
                
                break;
            }

            if(count_X==4)
            {
                save4();
                
                flag_wasd_mokhtasat_mohammad=true;
                
                break;
            }

            if(count_X==5)
            {
                save5();
                
                flag_wasd_mokhtasat_mohammad=true;
                
                break;
            }

            if(count_X>5)
            {
                sorry();
                
                R=save6();
                
                if(R==1)
                {
                	cout<<"khob to dost dari edame bedi vali ino bedon ke save nadari pas age dobare Q ro bezani hamin matno mibini"<<endl;
                	
                	cout<<endl;
				}
				
				if(R==0)
				{
					flag_wasd_mokhtasat_mohammad=false;
				}
            }
        }

        if(ans=='F')
        {
        	clear_screen();
        	
            z=1;

            display2(ROW,COL,v,c,z);
        }

        if(ans=='w')
        {
            V=v;

            v--;

            if(v>=0)
            {
            	clear_screen();
            	
                display2(ROW,COL,v,c,z);
            }

            if(v<0)
            {
            	clear_screen();
            	
                v=V;

                display2(ROW,COL,v,c,z);
            }
        }

        if(ans=='s')
        {
            V=v;

            v++;

            if(ROW>v)
            {
            	clear_screen();
            	
                display2(ROW,COL,v,c,z);
            }

            if(v>=ROW)
            {
            	clear_screen();
            	
                v=V;

                display2(ROW,COL,v,c,z);
            }
        }

        if(ans=='a')
        {
            C=c;

            c--;

            if(c>=0)
            {
            	clear_screen();
            	
                display2(ROW,COL,v,c,z);
            }

            if(c<0)
            {
            	clear_screen();
            	
                c=C;

                display2(ROW,COL,v,c,z);
            }
        }

        if(ans=='d')
        {
            C=c;

            c++;

            if(COL>c)
            {
            	clear_screen();
            	
                display2(ROW,COL,v,c,z);
            }

            if(c>=COL)
            {
            	clear_screen();
            	
                c=C;

                display2(ROW,COL,v,c,z);
            }
        }

        //cout<<"ans_p = "<<ans_p;

        if(ans==' ')
        {
        	clear_screen();
        	
        	count_e=0;
        	
        	npp=n;

            //cout<<"boooooz";
            
            
            if(a[v][c]!=-9)
            {
                bombcalcuator(v,c,ROW,COL);
            }
            
            
            for(int i=0;i<row;i++)
            {
            	for(int j=0;j<col;j++)
            	{
            		if(a[i][j]==10)
            		{
            			count_e++;
					}
				}
			}
			
			if(count_e==0)
				{
					flag_W=true;
				}
				
			//cout<<"npp = "<<npp<<endl;	
			
			npp=npp-count_e-t;
			
			//cout<<"npp = "<<npp<<endl;
			
			//cout<<"count_e = "<<count_e;
			
		    change_color_rgb(200, 150, 20);

            cout<<"emtiyaz lahze shoma mosavi hast ba ="<<npp<<endl;
            
            reset_color();

            if(a[v][c]==(-9))
            {
                cout<<"                           ______________________GAME OVER________________________"<<endl;

                // cout<<"boooooooz";

                end_game=7;

                cout<<endl;

                mohasebe( m , npp);
                
                GAME[H].score =npp;
                
                flag_PPP=true;
               
                H++;

                //inja bayad end game bashe na chiz dige

                flag=true;
            }

            // cout<<"MMMMMMMMM";

            display2(ROW,COL,v,c,z);

            if(flag==true)
            {
                cout<<"dost dari az aval bazi koni ? (y | n)"<<endl;

                cout<<endl;

                while(true)
                {
                    cin>>ans2;

                    end_game=7;

                    if(ans2=='y')
                    {
                        system("cls");

                        flag_wasd_mokhtasat_mohammad=true;
                        
                        flag_END=true;

                        break;

                    }

                    if(ans2 == 'n')
                    {
                        flag_wasd_mokhtasat_mohammad=false;
                        
                        flag_END=true;

                        break;
                    }

                    cout<<"bebin bayad ya y begi ya n"<<endl;
                }
            }

            if(flag_W==true)
            {
            	change_color_rgb(200, 200, 100);
            	
                cout<<"_______________________ WoooooooWWWWooooooW you are winner______________________"<<endl;
                
                reset_color();

                cout<<endl;
                
               mohasebe( m , npp);
               
               GAME[H].score =npp;
               
               flag_PPP=true;
               
               H++;
                
                cout<<endl;

                cout<<"dost dari az aval bazi koni ? (y | n)"<<endl;

                cout<<endl;

                while(true)
                {
                    cin>>ans2;

                    if(ans2=='y')
                    {
                        clear_screen();

                        flag_wasd_mokhtasat_mohammad=true;
                        
                        flag_END=true;

                        break;

                        //end_game=7;
                    }

                    if(ans2 == 'n')
                    {
                        flag_wasd_mokhtasat_mohammad=false;
                        
                        flag_END=true;

                        break;
                    }

                    cout<<"bebin bayad ya y begi ya n"<<endl;
                }
            }

            Q++;
        }
        
        if(flag_END==true)
        {
        	break;
		}
    }
}

void display2 (int Row, int Col, int x, int y, int z)
{

    if(z==1)
    {
        MM[x][y]=1;

        //cout<<"x = "<<x<<endl;

        // cout<<"y ="<<y;
    }

    cout<<endl;

    bool flag_c;

    flag_c=false;

    for(int i=0; i<Row; i++)
    {
        for(int j=0; j<Col; j++)
        {
            cout<<" ----- ";
        }

        cout<<endl;

        for(int j=0; j<Col; j++)
        {
            if (i==x && j==y)
            {
                change_color_rgb(200, 10, 150);

                flag_c=true;
            }
            switch(a[i][j])
            {
            case -9:
                if(end_game==7)
                {

                    cout<<" | "<<"B"<<" | ";

                }
                else
                {
                    if(flag_c==false)
                    {
                        change_color_rgb(10, 200, 150);
                    }

                    if(MM[i][j]==1)
                    {
                        cout<<" | "<<"F"<<" | ";
                    }

                    if(MM[i][j]==0)
                    {
                        cout<<" | "<<"*"<<" | ";
                    }

                }
                break;

            case 10:

                if(flag_c==false)
                {
                    change_color_rgb(10, 200, 150);
                }

                if(MM[i][j]==1)
                {
                    cout<<" | "<<"F"<<" | ";
                }

                if(MM[i][j]==0)
                {
                    cout<<" | "<<"*"<<" | ";
                }

                break;

            case 0:

                if(flag_c==false)
                {
                    change_color_rgb(10, 200, 150);
                }

                cout<<" | "<<" "<<" | ";


                break;

            default:
                cout<<" | "<< a[i][j] <<" | ";

            }

            flag_c=false;

            reset_color();
        }

        cout<<endl;
    }
    
    for(int i=0 ;i<col; i++)
    {
    	cout<<" ----- ";
	}
	
	cout<<endl;

}

void tozih_ravesh_bazi()
{
	change_color_rgb(20, 200, 150); 
	
    cout<<"bebin alan man do ta rah mizaram jolot baray bazi"<<endl;

    cout<<endl;

    cout<<"1-ba dadan mokhtasat"<<endl;

    cout<<endl;

    cout<<"2-ba dokme hay wasd"<<endl;

    cout<<endl;

    cout<<"hala az kodom ravesh dost dari bazi koni gozine ro behem bego alan"<<endl;

    cout<<endl;
    
     reset_color();

}

void tozih2 ()
{

    cout<<"dari bad satr va seton ro vared mikoni"<<endl;

    cout<<endl;

    cout<<"bebin goftam ke kam kam bayad 25 ta khone dashte bashim"<<endl;

    cout<<endl;

    cout<<"pas bayad jori tedad satr va setoneto entekhab koni ke zarbeshon bishtar mosavi 25 bashe"<<endl;

    cout<<endl;

}

void edame()
{
    cout<<endl;

    cout<<"tedad seton bara bar ast ba =";
}

void edame2()
{
    cout<<endl;

    cout<<"hala dorst shod berim marhale badi"<<endl;

    cout<<endl;
    
    clear_screen();
}

void  meghdar_MM()
{
    for(int i=0; i<20; i++)
    {
        for(int j=0; j<20; j++)
        {
            MM[i][j]=0;
        }
    }
}

void meghdar_ary()
{
	for(int i=0;i<20;i++)
	{
		for(int j=0;j<20;j++)
		{
			ary_save1[20][20]=0;
			
			ary_save2[20][20]=0;
			
			ary_save3[20][20]=0;
			
			ary_save4[20][20]=0;
			
			ary_save5[20][20]=0;
		}
	}
}

void save1()
{
    for(int i=0; i<20; i++)
    {
        for(int j=0; j<20; j++)
        {
            ary_save1[i][j]=a[i][j];
        }
    }
    
    end_game=1000;

    cout<<"alan bazi yek bar save shode";

    //delay 10 s;

    //pak kardan;
}

void save2()
{
    for(int i=0; i<20; i++)
    {
        for(int j=0; j<20; j++)
        {
            ary_save2[i][j]=a[i][j];
        }
    }

    cout<<"alan bazi baray bar dovom save shode";
    
    end_game=1000;

    //delay 10 s;

    //pak kardan;
}

void save3()
{
    for(int i=0; i<20; i++)
    {
        for(int j=0; j<20; j++)
        {
            ary_save3[i][j]=a[i][j];
        }
    }

    cout<<"alan bazi baray bar sevom save shode shoma 2 save digar darin havaseton bashe";
    
    end_game=1000;

    //delay 10 s;

    //pak kardan;
}

void save4()
{
    for(int i=0; i<20; i++)
    {
        for(int j=0; j<20; j++)
        {
            ary_save4[i][j]=a[i][j];
        }
    }

    cout<<"alan bazi baray bar chaharom save shode shoma 1 save digar faght darin lotfan be in nokte tavajoh dashte bashin ";
    
    end_game=1000;

    //delay 10 s;

    //pak kardan;
}

void save5()
{
    for(int i=0; i<20; i++)
    {
        for(int j=0; j<20; j++)
        {
            ary_save5[i][j]=a[i][j];
        }
    }

    cout<<"alan shoma digar savi nakhahid dasht ba arzoy movafaghiyat baray shoma dar edame bazi";
    
    end_game=1000;

    //delay 10 s;

    //pak kardan;
}

void mohammad_load_game()
{
	
	int W;
	
	W=entekhab_load_game();
	
	int P;
	
    if(W==1)
    {
        for(int i=0; i<20; i++)
        {
            for(int j=0; j<20; j++)
            {
                a[i][j]=ary_save1[i][j];
            }
        }

        P=ravesh_bazi();

        if(P==1)
        {
            mokhtasat(row,col,m,t);
        }

        if(P==2)
        {
            wasd(row,col,m,t);
        }
    }

    if(W==2)
    {
        for(int i=0; i<20; i++)
        {
            for(int j=0; j<20; j++)
            {
                a[i][j]=ary_save2[i][j];
            }
        }

        P=ravesh_bazi();

        if(P==1)
        {
            mokhtasat(row,col,m,t);
        }

        if(P==2)
        {
            wasd(row,col,m,t);
        }
    }

    if(W==3)
    {
        for(int i=0; i<20; i++)
        {
            for(int j=0; j<20; j++)
            {
                a[i][j]=ary_save3[i][j];
            }
        }

        P=ravesh_bazi();

        if(P==1)
        {
            mokhtasat(row,col,m,t);
        }

        if(P==2)
        {
            wasd(row,col,m,t);
        }
    }

    if(W==4)
    {
        for(int i=0; i<20; i++)
        {
            for(int j=0; j<20; j++)
            {
                a[i][j]=ary_save4[i][j];
            }
        }

        P=ravesh_bazi();

        if(P==1)
        {
            mokhtasat(row,col,m,t);
        }

        if(P==2)
        {
            wasd(row,col,m,t);
        }
    }

    if(W==5)
    {
        for(int i=0; i<20; i++)
        {
            for(int j=0; j<20; j++)
            {
                a[i][j]=ary_save5[i][j];
            }
        }

        P=ravesh_bazi();

        if(P==1)
        {
            mokhtasat(row,col,m,t);
        }

        if(P==2)
        {
            wasd(row,col,m,t);
        }
    }
    
    if(W==0)
    {
    	;
	}
}

void mokhtasat(int row, int col , int m , int t)
{

    display(row,col);

    cout<<endl;

    cout<<endl;

    char ans;

    int x,y,U,n;

    bool flag_c,flag,flag_END,flag_W;

    flag=false;
    
    flag_W=false;

    flag_END=false;

    int count_e;

    count_e=0;

    n=row*col;
    
    npp=n;

        while(end_game!=7)
        {
        	count_e=0;
        	
        	npp=n;

            cout<<endl;

            cout<<"satri ke mikhay va ston ro vared kon (aval satr badesh seton)"<<endl;

            cout<<endl;

            cin>>x;

            cin>>y;

            clear_screen(); 

            x--;

            y--;

          for(int i=0;i<row;i++)
            {
            	for(int j=0;j<col;j++)
            	{
            		if(a[i][j]==10)
            		{
            			count_e++;
					}
				}
			}
			
				if(count_e==0)
				{
					flag_W=true;
				}
			
			npp=npp-count_e-t;
            
            change_color_rgb(200, 150, 20);

            cout<<"emtiyaz lahze shoma mosavi hast ba ="<<npp<<endl;
            
            reset_color();

            if(a[x][y]!=-9)
            {
                bombcalcuator(x,y,row,col);
            }


            if(a[x][y]==(-9))
            {
            	change_color_rgb(20, 130, 200);
            	
                cout<<"                      ______________________GAME OVER________________________"<<endl;
                
                reset_color();

                end_game=7;

                cout<<endl;

                mohasebe( m , npp);
                
                GAME[H].score =npp;
               
                H++;
                
                flag_PPP=true;

                flag=true;
            }

            display(row,col);

            if(flag==true)
            {
            	cout<<endl;
            	
                cout<<"dost dari az aval bazi koni ? (y | n)";

                while(true)
                {
                    cin>>ans;

                    if(ans=='y')
                    {
                        clear_screen(); 

                        flag_wasd_mokhtasat_mohammad=true;

                        flag_END=true;

                        break;

                    }

                    if(ans == 'n')
                    {
                        flag_wasd_mokhtasat_mohammad=false;
                        
                        flag_END=true;

                        break;
                    }

                    cout<<"lotfan ya y baray edame bazi entekhab konid ya n bary kharej shodan az bazi";
                    
                    cout<<endl;
                }
            }

            if(flag_W==true)
            {
            	change_color_rgb(20, 130, 200);
            	
                cout<<"_______________________ WoooooooWWWWooooooW you are winner______________________"<<endl;
                
                reset_color();
                
                cout<<endl;
                
                mohasebe( m , npp);
                
                GAME[H].score =npp;
               
                H++;
                
                flag_PPP=true;
                
                cout<<endl;

                cout<<"dost dari az aval bazi koni ? (y | n)"<<endl;

                while(true)
                {
                    cin>>ans;

                    if(ans=='y')
                    {
                        clear_screen(); 

                        flag_wasd_mokhtasat_mohammad=true;

                        flag_END=true;

                        break;

                    }

                    if(ans == 'n')
                    {
                        flag_wasd_mokhtasat_mohammad=false;
                        
                        flag_END=true;

                        break;
                    }

                    cout<<"lotfan ya y baray edame bazi entekhab konid ya n bary kharej shodan az bazi";

                }
            }
            
             if(flag_END==true)
              {
                 break;
              }
        }
}

void sorry()
{
    cout<<"shoma az 5 save khod estefade kardin man motasefam vali emkan nadard ke save konid";
}

int flag_m1_row()
{
	//delay 5 s;
	
	//pak kardan;
	
	cout<<"khob lotfan tedad satr mored nazareton ro vared konid"<<endl;
	
	cout<<endl;
	
    int row;

    while(true)
    {
    	cout<<"tedad satr barabar ast ba = ";
    	
        cin>>row;

        if(row>=5 && 20>=row)
        {
            break;
        }

        cout<<"dost khoban havaset bashe ke kam tarim meghdar satr ha 5 va bishtarin meghdar 20 hast"<<endl;
        
        cout<<endl;
    }

    return row;
}

int m1()
{
    char m;

    int x;

    x=0;

    while(true)
    {
    	 cout<<"sathe entekhab shode mosavi hast ba = ";
    	
        cin>>m;
        
        cout<<endl;

        if(m=='1'||m=='2'||m=='3')
        {
            break;
        }

        cout<<"dari meghdar sath ro eshtebah vared mikoni lotfan dorost vared kon"<<endl;
        
        cout<<endl;
    }
    
    clear_screen();

    x=m;

    x=x-48;

    return x;
}

int flag_m1_col()
{
	
	//delay 5 s;
	
	//pak kardan;
	
	cout<<"khob lotfan tedad seton mored nazareton ro vared konid"<<endl;
	
	cout<<endl;
	
    int col;

    while(true)
    {
    	cout<<"tedad seton barabar ast ba = ";
    	
        cin>>col;
        
        cout<<endl;

        if(col>=5 && 20>=col)
        {
            break;
        }

        cout<<"dost khoban havaset bashe ke kam tarim meghdar seton ha 5 va bishtarin meghdar 20 hast"<<endl;
        
        cout<<endl;
    }
    
    clear_screen();

    return col;
}

void mokhtasat_bomb(int t, int row,int col)
{
    srand(time(NULL));

    int count_bomb,x,y;

    count_bomb=0;

    x=0;

    y=0;
    
    cout<<endl;
    
    //cout<<"t = "<<t;//3
    
    while(t!=count_bomb)
    {
    	x=rand()%row;

        y=rand()%col;
        
        if(a[x][y]!=-9)
        {
        	count_bomb++;
		}
		
		a[x][y]=-9;
	}
    
}

int count_bomb1(int m, int row, int col)
{
    int t,n;

    bool flag_n;

    flag_n=false;

    n=row*col;

    if(m==1)
    {
        if(row==5 && col==5)
        {

            cout<<"halat khas vared kardi ba tajoh be tozihat aval bazi az shoma tedad bomb gerfte nemishe"<<endl;

            cout<<endl;

            //delay 5 s mizaram in ja;

            flag_n=true;
        }

        if(flag_n==false)
        {
            cout<<"tedad bomb hato vared kon"<<endl;

            cout<<endl;

            while(true)
            {
            	cout<<"tedad bomb mosavi hast ba = ";
            	
                cin>>t;
                
                cout<<endl;

                if(n>=t && t>0)
                {
                    break;
                }

                cout<<"nemishe ke tedad bomb ha bishtar az khone ha bashe"<<endl;

                cout<<endl;
            }
        }

    }

    if(m==2)
    {
        if(row==12 && col==12)
        {
            cout<<"halat khas vared kardi ba tajoh be tozihat aval bazi az shoma tedad bomb gerfte nemishe"<<endl;

            //delay 5 s bezar

            cout<<endl;

            flag_n=true;
        }

        if(flag_n==false)
        {
            cout<<"tedad bomb hato vared kon"<<endl;

            cout<<endl;

            while(true)
            {
            	cout<<"tedad bomb mosavi hast ba = ";
            	
                cin>>t;
                
                cout<<endl;

                if(n>=t && t>0)
                {
                    break;
                }

                cout<<"nemishe ke tedad bomb ha bishtar az khone ha bashe"<<endl;

                cout<<endl;

            }
        }

    }

    if(m==3)
    {

        if ((row==20) && (col==20))
        {
            cout<<"halat khas vared kardi ba tajoh be tozihat aval bazi az shoma tedad bomb gerfte nemishe"<<endl;

            cout<<endl;

            //delay 5 s bezar

            flag_n=true;
        }

        if(flag_n==true)
        {
            cout<<"tedad bomb hato vared kon"<<endl;

            cout<<endl;

            while(true)
            {
            	cout<<"tedad bomb mosavi hast ba = ";
            	
                cin>>t;
                
                cout<<endl;

                if(n>=t && t>0)
                {
                    break;
                }

                cout<<"nemishe ke tedad bomb ha bishtar az khone ha bashe"<<endl;

                cout<<endl;

            }
        }

    }

    if((row==5 && col==5) || (row==12 && col==12) || (row==20 && col==20))
    {
         cout<<"khob to yeki az 3 halat khas tedad khone ro entekhab kardi"<<endl;

        //cout<<endl;

        if(n==25)
        {
            t=4;
        }

        if(n==144)
        {
            t=28;
        }

        if(n==400)
        {
            t=96;
        }
    }
    
    //cout<<"t = "<<t;//2
    
    clear_screen();

    return t;
}

int new_row()
{
    int row;

    while(true)
    {
        cin>>row;

        if(row>=5 && 20>=row)
        {
            break;
        }

        cout<<"dost khoban havaset bashe ke kam tarim meghdar satr ha 5 va bishtarin meghdar 20 hast"<<endl;
    }

    return row;
}

int new_col()
{
    int col;

    while(true)
    {
        cin>>col;

        if(col>=5 && 20>=col)
        {
            break;
        }

        cout<<"dost khoban havaset bashe ke kam tarim meghdar seton ha 5 va bishtarin meghdar 20 hast"<<endl;;
    }

    return col;
}

void menu(int T)
{
	bool flag_NAME;
	
    int P,K,swap,ES;

    int npp;

    int count_XX=0;

    char MOHAMMAD='y';
    
    flag_NAME=false;

    while(MOHAMMAD=='y')
    {
        if(count_XX==1)
        {
			
			name();
        	
            meghdar();

            T=entekhab();
        }

        if(T==1)
        {
            mohammad_new_game();

            P=ravesh_bazi();

            if(P==1)
            {
                mokhtasat(row,col,m,t);
            }

            if(P==2)
            {
                wasd(row,col,m,t);
            }
            
            flag_NAME=true;

            file_save();
        }

        if(T==2)
        {
            mohammad_load_game();
        }
        
        if(T==3)
        {
        	name_new();
        	
        	name();
        	
            khodafezi();
            
            flag_NAME=true;
		}

        if(T==4)
        {
           if(flag_PPP==true)
           {
           	    SWAP();
           
                khodafezi();
		   }
		   
		   if(flag_PPP==false)
		   {
		   	  cout<<"shoma ke bazi nakardi leaderboard mikhay"<<endl;
		   	  
		   	  cout<<endl;
		   	  
		   	  khodafezi();
		   }
        }
        
        if(T==5)
        {
        	khodafezi();
		}

        if(flag_wasd_mokhtasat_mohammad==true)
        {
            MOHAMMAD='y';

            count_XX=1;
        }
        
       // cout<<"count_XX ="<<count_XX;

        if(flag_wasd_mokhtasat_mohammad==false)
        {
            MOHAMMAD='n';
            
            change_color_rgb(100, 100, 200);
            
            cout<<"merci ke bazi kardin omidvaram behton khosh gozashte bashe :)";
            
            reset_color();

            count_XX=0;
            
            exit(0);
        }
    }
}

int entekhab_load_game()
{
	int x;
	
	bool flag_true;
	
	flag_true=true;
	
	cout<<"khob shoma alan toy load game ha hastin ba tajoh be save ke mikhahid adad mored nazar ra vared konid"<<endl;
	
	cout<<endl;
	
	if(count_X==0)
	{
		x=tozih_count_X();
		
		if(x==1)
		{
			flag_wasd_mokhtasat_mohammad=true;
		}
		
		if(x==0)
		{
			flag_wasd_mokhtasat_mohammad=false;
		}
		
		flag_true=false;
		
		x=0;
	}
	
	for(int i=1;i<=count_X;i++)
	{
		cout<<i<<"-"<<"save"<<i<<"()"<<endl;
		
		cout<<endl;
	}
	
	while((true) && (flag_true==true))
	{
		cin>>x;
		
		if(x==count_X && x>=1)
		{
			break;
		}
		
		if(x==count_X-1 && x>=1)
		{
			break;
		}
		
		if(x==count_X-2 && x>=1)
		{
			break;
		}
		
		if(x==count_X-3 && x>=1)
		{
			break;
		}
		
		if(x==count_X-4 && x>=1)
		{
			break;
		}
		
		cout<<"eshtebah darin adad save ro mizanid lotfan dorost vared konid"<<endl;
		
		cout<<endl;
	}
	
	return x;
}

int save6()
{
	int x;
	
	cout<<"age dost dari edame bazi ro bokoni 1 ro vared kon"<<endl;
		
	cout<<endl;
		
	cout<<"age dost dari beri menu 0 ro vared kon"<<endl;
		
	cout<<endl;
	
	while(true)
	{
		cout<<"adad vared shod mosavi hast ba = ";
		
		cin>>x;
		
		cout<<endl;
		
		if(x==1 || x==0)
		{
			break;
		}
		
		cout<<"ya bayad 1 vared koni ya 0"<<endl;
		
		cout<<endl;
	}
	
	return x;
}

void file_save()
{
	
	ofstream pf2("Leaderboard.txt",ios::app);
	
	if(!pf2)
	{
		cout<<"file baz nashod";
		
		getch();
		
		exit(0);
	}
	
	//pf2<<GAME.NAME<<"          ";

	//GAME.score=npp;
		
	//pf2<<GAME.score;
	
	//pf2<<'\n';
	
	//pf2.close();
	
}

int tozih_liderboard()
{
	char ans;
	
	int x;
	
	cout<<"khob shoma alan darin liderboard ro negah mikonid"<<endl;
	
	cout<<endl;
	
	cout<<"khob dost dari beri menu ya az bazi khrej besh ? "<<endl;
	
	cout<<endl;
	
	cout<<"1-berim menu"<<endl;
	
	cout<<endl;
	
	cout<<"2-brim az bazi biron"<<endl;
	
	while(true)
	{
		cout<<"gozin shoma = ";
		
		cin>>ans;
		
		if(ans=='1'||ans=='2')
		{
			break;
		}
		
		cout<<"eshtebah darin vared mikonid add ro";
		
		cout<<endl;
	}
	
	x=ans;
	
	x=x-48;
	
	return x;
}

int tozih_count_X()
{
	char ans;
	
	int x;
	
	cout<<"khob shoma savi nadarin"<<endl;
	
	cout<<endl;
	
	cout<<"shoma dost darin berin menu ya az bazi kharej beshin"<<endl;
	
	cout<<endl;
	
	change_color_rgb(100, 100, 200);
	
	cout<<"1-berim menu"<<endl;
	
	cout<<endl;
	
	cout<<"2-berim biron bazi"<<endl;
	
	reset_color();
	
	cout<<endl;
	
	while(true)
	{
		cout<<"gozine shoma = ";
		
		cin>>ans;
		
		if(ans=='1'||ans=='2')
		{
			break;
		}
		
		cout<<"shoma gozine eshtebah vared mikonid";
		
		cout<<endl;
	}
	
	clear_screen();
	
	x=ans;
	
	x=x-48;
	
	return x;
}

void khodafezi()
{
	char ans;
	
	cout<<"aya dost darid bazi ro tark konid ? "<<endl;
	
	cout<<endl;
	
	cout<<"1-are"<<endl;
	
	cout<<endl;
	
	cout<<"2-na"<<endl;
	
	cout<<endl;
	
	while(true)
	{
		cout<<"gozine shoma = ";
		
		cin>>ans;
		
		cout<<endl;
		
		if(ans=='1'||ans=='2')
		{
			break;
		}
		
		cout<<"shoma eshtebah darid vared mikonid gozine ra"<<endl;
		
		cout<<endl;
	}
	
	if(ans=='1')
	{
		flag_wasd_mokhtasat_mohammad=false;
	}
	
	if(ans=='2')
	{
		flag_wasd_mokhtasat_mohammad=true;
	}
}

void name_new()
{
	cout<<"shoma change name ra vared kardin alan dobare az shoma miporsam che esme dost darin vared konid"<<endl;
	
	cout<<endl;
	
	cout<<"bad az inke esm shoma porside shod az shoma miporsam dost darin edame bazi ro berin ya na "<<endl;
	
	cout<<endl;
}

void SWAP()
{
	int swap_score;
	
	char swap_name[100];
	
	int l1,l2,l3;
	
	for(int i=0 ; i<H ; i++)
	{
		for(int j=0 ;j<H;j++)
		{
			if(GAME[i].score>GAME[j].score)
			{
				l1=0;
				
				l2=0;
				
				l3=0;
				
			    swap_score=GAME[j].score;
			    
			    GAME[j].score=GAME[i].score;
			    
			    GAME[i].score=swap_score;
			    
			    while(GAME[j].NAME[l1]!='\0')
			    {
			    	l1++;
				}
				
				for(int u=0;u<=l1;u++)
				{
					swap_name[u]=GAME[j].NAME[u];
				}
				
				while(GAME[i].NAME[l2]!='\0')
				{
					l2++;				
				}
				
					for(int u=0;u<=l2;u++)
				{
					GAME[j].NAME[u]=GAME[i].NAME[u];
				}
				
				while(swap_name[l3]!='\0')
				{
					l3++;
				}
				
					for(int u=0;u<=l3;u++)
				{
					GAME[i].NAME[u]=swap_name[u];				
				}
			}
		}
	}
	
	for(int i=0;i<H;i++)
	{
		cout<<GAME[i].NAME<<"                 "<<GAME[i].score;
		
		cout<<endl;
	}
	
	delay(10000);
}


































































































