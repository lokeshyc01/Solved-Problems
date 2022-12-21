import java.lang.annotation.IncompleteAnnotationException;
import java.util.*;

class MarvellousX
{
    public int SmallCount(String s)
    {   
        int iCnt = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if((s.charAt(i) >= 'a') && s.charAt(i) <= 'z')
            {
                iCnt++;
            }
        }  
        return iCnt;
    }
}

class Program271
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter your full name");
        String str = sobj.nextLine();

        MarvellousX obj = new MarvellousX();
        int iRet = obj.SmallCount(str);
        System.out.println("The numbers of small count are : "+iRet);

    }
}