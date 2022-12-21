import java.util.Scanner;
class AssignmentQuestion
{
 public static void main(String arg[])
 {
     Scanner sobj = new Scanner(System.in);
    System.out.println("enter the size of the arary ");
     int iSize = sobj.nextInt();

     int Arr[] = new int[iSize];

     System.out.println("Enter Array elements");
     for(int iCnt = 0; iCnt < Arr.length ; iCnt++)
     {
        Arr[iCnt] = sobj.nextInt();
     }

     int iMax = 0;

    for(int iCnt = 0; iCnt < Arr.length; iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }
    System.out.println(iMax);
 }   
}
