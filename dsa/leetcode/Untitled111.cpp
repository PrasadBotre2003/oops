#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int no_of_orders;
  cout<<"No of orders : ";
  cin>>no_of_orders;
  cout<<"\n";
  
  vector<int> priorites(no_of_orders);
  cout<<"\nPriorites :";
  for (unsigned int i = 0; i < no_of_orders; i++)
  {
  	cin >> priorites[i];
  }
  
  cout<<"Enter friends position : ";
  int K;
  cin >> K;
  cout<<"\n";
  int count = 1;
  
  int K_priorites = priorites[K-1];
  cout<<"\nK_priorites : "<<K_priorites<<"\n";
  bool exit = true;
  int max_priorites_index;
  
	while (exit)
	{
  		int max_priorites = *max_element(priorites.begin(), priorites.end());
        cout<<"\nmax_priorites : "<<max_priorites<<"\n";
  
  		if(K_priorites == max_priorites)
  		{
            cout<<"\nentered if\n";
    		cout<<"count : "<<count<<"\n";
    		exit = false;
  		}


  		else
  		{
            cout<<"\nentered else\n";
  			for(unsigned int i = 0; i < no_of_orders; i++)
  			{
    			if( priorites[i] == max_priorites )
    			{
  					max_priorites_index = i;
                    cout<<"\n max_priorites_index : "<<max_priorites_index<<"\n"; 
    			}
  			}
            auto del = find(priorites.begin(), priorites.end(),max_priorites);
  			priorites.erase(del);
            cout<<"P : ";
  		    for (unsigned int i = 0; i < max_priorites; i++)
  		    {
    		    priorites[i]++;
                cout<<priorites[i];
  		    }
        
  		    count++;
            cout<<"\nCount : " << count << "\n";
  		    K_priorites++;
  		    no_of_orders--;
  		}
        
	}
  return 0;
}
