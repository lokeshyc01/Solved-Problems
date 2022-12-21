import java.util.Scanner;
class AssignmentQuestion2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size of Array");
        
        int iSize = sobj.nextInt();
        int Arr[] = new int[iSize];

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        int iSum = 0;

        for(int iCnt  = 0; iCnt < Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        
        float iAverage = iSum / Arr.length;

        System.out.println("The Average of Number are : "+iAverage);
    }
    
}
