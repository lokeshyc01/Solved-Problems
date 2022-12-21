 import java.util.*;

 class ArrayX
 {
    public int Summation()
    {
        int iCnt = 0,iSum = 0;

        for(iCnt = 0;iCnt <= 5;iCnt++)
        {
            iSum = iSum + iCnt;
        }
        return iSum;
    }
 }
 
 class Program28
 {
    public static void main (String arr[])
    {
        ArrayX aobj = new ArrayX();

        int iRet = 0;
        iRet = aobj.Summation();

        System.out.println("summation is : "+iRet);
    }
}
