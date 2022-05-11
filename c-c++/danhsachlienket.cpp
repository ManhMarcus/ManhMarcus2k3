#include<iostream>
	using namespace std;
struct node					//Khoi tao cau truc danh sach
{
	int data;
	struct node *pNext;
};
typedef struct node Node;
struct list
{
	Node *phead;//Node quan li dau danh sach
	Node *ptail;//Node quan li cuoi danh sach
};
typedef struct list List;
void khoitao(List &l)
{
	l.phead = NULL;
	l.ptail= NULL;	
}
Node *khoitaonode(int x){
	Node *p = new Node;
	if (p == NULL)
	{
		cout << "\nKhong du bo nho de cap phat !";
		return NULL;
	}
	p->data = x; // gán x cho data
	p->pNext = NULL;
	return p;
}

//Them ham p vao dau danh sach
void themvaodau(List &l, Node *p)
{
	if(l.phead==NULL)
	{
		l.phead=l.ptail=p;
	}
	else
	{
		p->pNext=l.phead;	//Dung con tro cua node p lien ket voi l.phead
		l.phead=p;			//Cap nhat lai l.phead la p
	}
}

//Them ham p vao cuoi danh sach
void themvaocuoi(List &l,Node *p)
{
	if(l.phead==NULL)
	{
		l.phead=l.ptail=p;
	}
	else
	{
		l.ptail->pNext=p;	//
		l.ptail=p;			//Cap nhat lai l.ptail la p
	}
}

//Ham danh sach
void xuatdanhsach(List l)
{
	for(Node *k=l.phead; k!=NULL;k= k->pNext)
	{
		cout<<k->data<<" ";
	}
}

//Them node p vao sau node q
void themnodevaosaunode(List &l, Node *p)
{
	int x;
	cout <<"\nNhap gia tri node q: ";
	cin >> x;
	Node *q= khoitaonode(x);
	if (q->data == l.phead->data && l.phead->pNext == NULL)
	{
		themvaocuoi(l, p);
	}
	else 
	{
		for(Node *k= l.phead; k!=NULL ; k=k->pNext)
		{
			if(q->data==k->data)
			{
				Node *h= khoitaonode(p->data);
				Node *g=k->pNext;
				h->pNext = g;
				k->pNext = h;
			}
		}
	}
}

//Ham menu chuong trinh
void menu(List &l){
	int luachon;
	while(69)
	{
		system("cls");
		cout<<"\n\n\t\t=============Menu=============";
		cout<<"\n\t1.Them node vao danh sach.";
		cout<<"\n\t2.Xuat danh sach lien ket don";
		cout<<"\n\t3.Them node vao sau node ";
		cout<<"\n\t0.Ket thuc!";
		cout<<"\n\n\t\t=============End==============";
		cout<<"\n\nNhap lua chon: ";
		cin>>luachon;
		if(luachon<0 || luachon>3)
		{
			cout<<"Lua chon khong hop le !";
			system("pause");
		}
		if(luachon==1)
		{
			int x;
			cout<<"Nhap gia tri so nguyen: ";
			cin >> x;
			Node *p= khoitaonode(x);
			themvaocuoi(l,p);		
		}
		else if(luachon==2)
		{
			xuatdanhsach(l);
			system("pause");
		}
		else if(luachon==3)
		{
			int x;
			cout<<"\nNhap gia tri p can them vao sau: ";
			cin >> x;
			Node *p= khoitaonode(x);
			themnodevaosaunode(l, p);
		}
		else if(luachon==0)
		{
			break;
		}
	}
}
int main()
{
	List l;
	khoitao(l);
	menu(l);
	return 0;
}
