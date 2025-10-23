import java.util.*;

class ExceptionDemo8
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
    
        int iNo1 = 0, iNo2 = 0; 
        float fAns = 0.0f;

        System.out.println("Enter first Number");
        iNo1 = sobj.nextInt();

        System.out.println("Enter Second Number");
        iNo2 = sobj.nextInt();

        try
        {
        System.out.println("Inside try block");
        fAns = iNo1 / iNo2;
        }


        catch(ArithmeticException aobj) // Specific Catch
        {
        System.out.println("Inside catch block");
        System.out.println(aobj);
        }

        catch(Exception eobj)      // Generic Catch
        {
            System.out.println("Inside Generic Catch");
        }
        finally 
        {
            System.out.println("Inside Finally Block");
        }
        
        System.out.println("Division is :"+fAns);
    }    
}
