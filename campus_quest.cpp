/* Abhishek Gaba
 * HW 4
*/

#include <iostream>
using namespace std;
int main()
{
    char mode;
    int  distance = 14;
    int  covered_B = 2;
    int  covered_S = 5;
    int  covered_R = 10;
    int  count = 4; 
    
    
   // declaration of variables ^^^^ 
    
    
    
    
    cout <<"Hello. You are 14 miles from campus. Would you like to take the [B]us, [S]ubway, or [R]amVan to campus? " << endl;
    
     
    
    // switch inside do makes it easier. make sure to change distance every times
    
    
    do {   cin >> mode;
   
    switch (mode) {
        case 'B' :
            cout << "You chose to take the bus! " << endl;
            break;

        case 'S' :
            cout << "You chose to take the subway! " << endl;
            break;

        case 'R' :
            cout << "You chose to take the RamVan! " << endl;
            break; }
        


       
    
        
        
        
        
        
        
        
        
        
        
        
   if ( mode == 'B' ) {
       
       cout << "You now have " << distance  - covered_B << " miles left to campus " << endl;
       distance = ( distance - covered_B );
       count = ( count - 1 ); } 
    
   else if ( mode == 'S' ) {
     
       cout << "You now have " << distance - covered_S << " miles left to campus " << endl; 
       distance = ( distance - covered_S );
       count = ( count - 1 ); }
       
   else if ( mode == 'R' ) {
    
       cout << "You now have " << distance - covered_R << " miles left to campus " << endl;
       distance = ( distance - covered_R );
       count = ( count - 1 );}
   else 
       cout << "That is not a valid statement. Please enter a valid option " << endl; } while ( count >= 1 );
   
                                                                                         
   if (( distance > 0 ) && ( distance < 14 ) && ( count == 0 ))
       cout << "You did not reach the campus " << endl;

   else if (( distance < 0 ) && ( count == 0 ))
       cout << "You overshot the distance to campus " << endl;
   else
       cout << "You Won" << endl;


          
// introduce a new variable that calculates total distance travelled throughout. 
// in order to have switch statement, there can be a do while loop which has != B R or S

   
   
   return 0;
}


