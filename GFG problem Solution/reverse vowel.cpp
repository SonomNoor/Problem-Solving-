//reverse the vowels 
#include<iostream>
using namespace std;

bool isVowel (char c)
{
	return (c=='a' || c=='e'||c=='i'|| c=='o'|| c=='u'||
c=='A' || c=='E'||c=='I'|| c=='O'|| c=='U');
}
	string modify (string s)
	{
		int n=s.size();
		int front=0;
		int back=n-1;
		
		while (front<back)
		{
			if (!isVowel(s[front]))
			{
			front++;
			continue;
		}
			if (!isVowel(s[back])){
			
			back--;
			continue;
		}
			
			swap(s[front],s[back]);
			front++;
			back--;
	
		}
		return s;
	}


int main ( )
{
	string s ;
	cin>>s;
cout <<	modify(s);
	return 0;
	
	
	
	
}


---------////same solution in gfg format 
#include<iostream>
using namespace std;

public:
        bool isVowel(char c) { 
        return (c=='a' || c=='A' || c=='e' || 
                c=='E' || c=='i' || c=='I' || 
                c=='o' || c=='O' || c=='u' || 
                c=='U'); 
        } 

        string modify (string s)
        {
            int n = s.size();
            int front = 0;
            int back = n - 1;

            while(front < back){
                if(!isVowel(s[front])){
                    front++;
                    continue;
                }

                if(!isVowel(s[back])){
                    back--;
                    continue;
                }

                swap(s[front], s[back]);
                front++;
                back--;
            }
            return s;
        }
};

int main ()
{
  t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
}
}
