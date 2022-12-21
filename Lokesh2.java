package Lokesh;
import java.util.*;

public class Lokesh2
{
    public int Arr[];

    public Lokesh2(int iSize)
    {
         Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter array "+Arr.length+" Elements");
        for(int iCnt = 0;iCnt < Arr.length;iCnt++)
        {
            System.out.println("enter element at :"+(iCnt+1)+"Position");
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        for(int iCnt = 0;iCnt < Arr.length;iCnt++)
        {
           System.out.println(Arr[iCnt]);
        }
    }
}
