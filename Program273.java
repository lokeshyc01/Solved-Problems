import java.util.*;

class MarvellousX
{
    public int DigitCount(String s)
    {   
        int iCnt = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if((s.charAt(i) >= '0') && s.charAt(i) <= '9')
            {
                iCnt++;
            }
        }  
        return iCnt;
    }
}

class Program273
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter your full name");
        String str = sobj.nextLine();

        MarvellousX obj = new MarvellousX();
        int iRet = obj.DigitCount(str);
        System.out.println("The numbers of Digits count are : "+iRet);

    }
}