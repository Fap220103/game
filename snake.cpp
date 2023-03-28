#include<bits/stdc++.h>
#include "mylib.h" 
#define MAX 100
using namespace std;
int sl = 3;
bool SNT(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0){
			 return false;
		}
	 } 
	 return n>1;
 } 
bool SCP(int n){
	if(n<1) return false;
	int i=sqrt(n);
	if(i*i==n) return true;
	return false;	
}
bool SHH(int n){
    int sum = 0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0) 
            sum+=i;
    }
    if(sum==n) return true ; 
    else return false;
}
long long fibo(int n){
	if(n<=1) return n;
	else return fibo(n-1) + fibo(n-2);
}
void  IN_SHH()
{
	int n;
	cout<<"nhap n: ";
	cin>>n;
	for(int i = 1;i <=n;i++)
	{
		if(SHH(i))
		{
			cout<<i<<" "; 
		}
	}
 } 
void Tong_Le()
{
	int n;
	cout<<"nhap n: ";
	cin>>n;
	int sum = 0;
	for(int i = 1;i <=n;i++)
	{
		if(i % 2 != 0)
		{
			sum+=i;
		}
	}
	cout<<"tong cac so le= "<<sum;
}
void Tong_Chan()
{
	int n;
	cout<<"nhap n: ";
	cin>>n;
	int sum = 0;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			sum+=i;
		}
	}
	cout<<"tong cac so chan= "<<sum;
}
void Tong_SNT()
{
	int n;
	cout<<"nhap n: ";
	cin>>n;
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		if(SNT(i))
		{
			sum+=i;
		}
	}
	 cout<<"tong cac so nguyen to trong [2,"<<n<<"]= "<<sum;
} 
void Tong_SCP()
{
	int n;
	cout<<"nhap n: ";
	cin>>n;
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		if(SCP(i))
		{
			sum+=i;
		}
	}
	 cout<<"tong cac so chinh phuong trong [1,"<<n<<"]= "<<sum;
} 
void Tong_Fibo()
{
	int n;
	cout<<"nhap n: ";
	cin>>n;
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		if(SCP(i))
		{
			sum+=i;
		}
	}
	 cout<<"tong cac so Fibo= "<<fibo(n);
}
void sapxep_tangdan(int a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				    a[i]=a[j];
				    a[j]=temp;
			}
		}
	}
}
void sapxep_giamdan(int a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				int temp=a[i];
				    a[i]=a[j];
				    a[j]=temp;
			}
		}
	}
}
void mang_tangdan()
{
	int n;
	int a[n]; 
	cout<<"nhap so luong phan tu mang: "; cin>>n;
	cout<<"nhap mang: "; 
	for(int i=0;i<n;i++)
	{
		cin>>a[i]; 
	 } 
	sapxep_tangdan(a,n) ;
	cout<<"mang sau khi sap xep tang dan la: "; 
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" "; 
	 } 
}
void mang_giamdan()
{
	int n;
	int a[n]; 
	cout<<"nhap so luong phan tu mang: "; cin>>n;
	cout<<"nhap mang: "; 
	for(int i=0;i<n;i++)
	{
		cin>>a[i]; 
	 } 
	sapxep_giamdan(a,n) ;
	cout<<"mang sau khi sap xep giam dan la: "; 
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" "; 
	 } 
}
void dao_nguoc(int a[],int &n)
{
	int l=0,r=n-1; 
	while(l<r)
	{
		int temp = a[l];
		a[l] = a[r];
		a[r] = temp;
		l++;
		r--; 
	 } 
 } 
 void dao_nguoc_mang()
{
	int n;
	int a[n]; 
	cout<<"nhap so luong phan tu mang: "; cin>>n;
	cout<<"nhap mang: "; 
	for(int i=0;i<n;i++)
	{
		cin>>a[i]; 
	 } 
	dao_nguoc(a,n) ;
	cout<<"mang sau khi dao nguoc la: "; 
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" "; 
	 } 
}
void ve_tuong_tren()
{
	int x = 10,y = 1;
	while(x <= 100)
	{
		gotoXY(x,y);
    	cout<<"+";
    	x++;
	}	
}
void ve_tuong_duoi()
{
	int x = 10,y = 26;
	while(x <= 100)
	{
		gotoXY(x,y);
    	cout<<"+";
    	x++;
	}	
}
void ve_tuong_trai()
{
	int x = 10,y = 1;
	while(y <= 26)
	{
		gotoXY(x,y);
    	cout<<"+";
    	y++;
	}	
}
void ve_tuong_phai()
{
	int x = 100,y = 1;
	while(y <= 26)
	{
		gotoXY(x,y);
    	cout<<"+";
    	y++;
	}	
}
void ve_tuong()
{
	SetColor(11);
	ve_tuong_tren();
	ve_tuong_duoi();
	ve_tuong_trai();
	ve_tuong_phai();
	SetColor(7);
}
void khoi_tao_ran(int toadox[],int toadoy[])
{
	int x = 50, y = 13;
	for(int i=0;i<sl;i++)
	{
		toadox[i] = x;
		toadoy[i] = y;
		x--;
	}
}
void ve_ran(int toadox[],int toadoy[])
{
	for(int i = 0; i < sl; i++)
	{
		gotoXY(toadox[i], toadoy[i]);
		if(i == 0)
		{
			cout<<"0";
		}
		else
		{
			cout<<"o";
		}
	}
}
void xoa_du_lieu_cu(int toadox[],int toadoy[])
{
	for(int i = 0; i < sl; i++)
	{
		gotoXY(toadox[i], toadoy[i]);
			cout<<" ";
	}
}
void them(int a[],int x)
{
	for(int i=sl;i>0;i--)
	{
		a[i] = a[i-1];
	}
	a[0] = x;
	sl++;
}
void xoa(int a[],int vt)
{
	for(int i = vt ;i < sl;i++)
	{
		a[i] = a[i + 1];
	}
	sl--;
}

bool kt_ran(int x0,int y0,int toadox[],int toadoy[])
{
	//ran cham tuong
	if(y0 == 1 && x0 >= 10 && x0 <= 100)
	{
		return true;
	}
	else if(y0 == 26 && x0 >= 10 && x0 <= 100)
	{
		return true;
	}
	else if(x0 == 10 && y0 >= 1 && y0 <= 26)
	{
		return true;
	}
	else if(x0 == 100 && y0 >= 1 && y0 <= 26)
	{
		return true;
	}
	// ran cham than
	for(int i = 1;i < sl;i++)
	{
		if((toadox[0] == toadox[i]) && (toadoy[0] == toadoy[i]))
		{
			return true;
		}
	}
	return false;
}
//bool kt_ran(int toadox[],int toadoy[])
//{
//	bool kt1 = kt_ran_cham_tuong(toadox[0], toadoy[0]);
//	bool kt2 = kt_ran_cham_duoi(toadox, toadoy);
//	if(kt1 == true || kt2 == true)
//	{
//		return true;
//	}
//	return false;
//}
bool kt_ran_de_qua(int &xqua,int &yqua,int toadox[],int toadoy[])
{
	for(int i = 0;i < sl;i++)
	{
		if(xqua == toadox[i] && yqua == toadoy[i])
		{
			return true;
		}
	}
	return false;
}
void tao_qua(int &xqua,int &yqua,int toadox[],int toadoy[])
{
	do{
		xqua = rand() % (99 - 11 + 1) + 11;
    	yqua = rand() % (25 - 2 + 1) + 2;
	}while(kt_ran_de_qua(xqua,yqua,toadox,toadoy)==true);
	int i = rand() % (15 - 1 + 1) + 1;
	SetColor(i);
	gotoXY(xqua,yqua);
    cout<<"$";
    SetColor(7);
}
bool kt_ran_an_qua(int xqua,int yqua,int x0,int y0)
{
	if(x0 == xqua && y0 == yqua)
	{
		return true;
	}
	return false;
}
void xu_li_ran(int toadox[],int toadoy[],int x,int y,int &xqua,int &yqua)
{
	//b1: them toa do moi vao dau mang
	them(toadox,x);
	them(toadoy,y);
	if(kt_ran_an_qua(xqua, yqua, toadox[0], toadoy[0]) == false)
	{
		//b2: xoa toa do cuoi mang
    	xoa(toadox,sl - 1);
    	xoa(toadoy,sl - 1);
	}
	else
	{
		tao_qua(xqua,yqua,toadox,toadoy);
	}
	//b3: ve ran
	ve_ran(toadox,toadoy);
}
bool dung_game()
{
	char kitu = _getch();
	if(kitu == 113) return true;
	return false;
}
void GameOn()
{
	bool gameover = false;
	int toadox[MAX], toadoy[MAX];
	ve_tuong();
	khoi_tao_ran(toadox, toadoy);
	ve_ran(toadox, toadoy);
	srand(time(NULL));
	int xqua, yqua;
	tao_qua(xqua,yqua,toadox,toadoy);
	int x = 50,y = 13; // dinh hinh vi tri can di chuyen
	int check = 2;
	int diem=0;
	while(gameover == false)
	{
		//0 : di xuong
		//1: di len
		//2: di phai
		//3: di trai
		//============ thuc hien di chuyen
		if(_kbhit())
		{
			char kitu = _getch();
			if(kitu == -32)
			{
				kitu = _getch();
				if(kitu == 72 && check != 0) //di len 
				{
					check = 1;
				}
				else if(kitu == 80 && check != 1)//di xuong
				{
					check = 0;
				}
				else if(kitu == 77 && check != 3)//di phai
				{
					check = 2;
				}
				else if(kitu == 75 && check != 2)//di trai
				{
					check = 3;
				}
			}
		}
		if(check == 0)
		{
			//di xuong 
			y++;
		}else if(check == 1)
		{
			//di len 
			y--;
		}else if(check == 2)
		{
			x++;
			//di phai
		}else if(check == 3)
		{
			//di trai
			x--;
		}
		xoa_du_lieu_cu(toadox,toadoy);
		xu_li_ran(toadox, toadoy, x, y,xqua,yqua);
		//=============kiem tra=============
		if(kt_ran(toadox[0],toadoy[0],toadox, toadoy) == true)
		{
			gotoXY(150,150);
			cout<<"game over";
			break;
		}
//		gameover = dung_game();
		Sleep(100);
	}
}
int main()
{
//	bool gameover = false;
//	int toadox[MAX], toadoy[MAX];
//	ve_tuong();
//	khoi_tao_ran(toadox, toadoy);
//	ve_ran(toadox, toadoy);
//	srand(time(NULL));
//	int xqua, yqua;
//	tao_qua(xqua,yqua,toadox,toadoy);
//	int x = 50,y = 13; // dinh hinh vi tri can di chuyen
//	int check = 2;
//	while(gameover == false)
//	{
//		//0 : di xuong
//		//1: di len
//		//2: di phai
//		//3: di trai
//		//============ thuc hien di chuyen
//		if(_kbhit())
//		{
//			char kitu = _getch();
//			if(kitu == -32)
//			{
//				kitu = _getch();
//				if(kitu == 72 && check != 0) //di len 
//				{
//					check = 1;
//				}
//				else if(kitu == 80 && check != 1)//di xuong
//				{
//					check = 0;
//				}
//				else if(kitu == 77 && check != 3)//di phai
//				{
//					check = 2;
//				}
//				else if(kitu == 75 && check != 2)//di trai
//				{
//					check = 3;
//				}
//			}
//		}
//		if(check == 0)
//		{
//			//di xuong 
//			y++;
//		}else if(check == 1)
//		{
//			//di len 
//			y--;
//		}else if(check == 2)
//		{
//			x++;
//			//di phai
//		}else if(check == 3)
//		{
//			//di trai
//			x--;
//		}
//		xoa_du_lieu_cu(toadox,toadoy);
//		xu_li_ran(toadox, toadoy, x, y,xqua,yqua);
//		//=============kiem tra=============
//		gameover = kt_ran(toadox, toadoy);
//		Sleep(100);
//	}
    while(1)
    {
    	cout<<"\n1. choi game!"<<endl;
    	cout<<"2. Tong cac so nguyen to!"<<endl;
    	cout<<"3. Tong cac so chinh phuong!"<<endl;
    	cout<<"4. Tong cac so le!"<<endl;
    	cout<<"5. Tong cac so chan!"<<endl;
    	cout<<"6. Tong cac so Fibonacci!"<<endl;
    	cout<<"7. mang tang dan!"<<endl;
    	cout<<"8. mang giam dan!"<<endl;
    	cout<<"9. lat nguoc mang!"<<endl;
    	cout<<"10. in cac so hoan hao!"<<endl;
    	cout<<"0. thoat!"<<endl;
    	int lc ;
    	cout<<"nhap lua chon cua mang: "; 
    	cin>>lc;
    	if(lc == 1)
    	{
    		GameOn();
		}
		else if(lc == 2)
		{
			Tong_SNT();
		}
		else if(lc == 3)
		{
			Tong_SCP();
		}
		else if(lc == 4)
		{
			Tong_Le();
		}
		else if(lc == 5)
		{
			Tong_Chan();
		}
		else if(lc == 6)
		{
			Tong_Fibo();
		}
		else if(lc == 7)
		{
			mang_tangdan();
		}
		else if(lc == 8)
		{
			mang_giamdan();
		}
		else if(lc == 9)
		{
			dao_nguoc_mang();
		}
		else if(lc == 10)
		{
			IN_SHH();
		}
		else if(lc == 0)
		{
			break;
		}
	}
    return 0;
}


