//

#include <iomanip>
#include <iostream>
using namespace std;

// complete the function maxmin( )

int maxmin(int n1, int n2, int n3, int &min, int &max)
{
if((n1 >= n3) && (n1 >= n2))
{
    max = n1;
}

else if((n2 >= n3) && (n2 >= n1))
{
max = n2;
}

else 
{
max = n3;
}

if((n1 <= n3) && (n1 <= n2))
{
min = n1;
}

else if((n2 <= n3) && (n2 <= n1))
{
min = n2;
}

else
{
min = n3;
}
}