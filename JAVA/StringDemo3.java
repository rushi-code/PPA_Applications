class StringDemo1 
{
    public static void main(String[] args) 
    {
        String str1 = "Hello";
        String str2 = new String("Hello");
        String str3 = "Demo";
        String str4 = new String("Hello");
        String str5 = new String("Demo");
        String str6 = "PPA";
        String str7 = "Hello";

        System.out.println("str1 haschcode : "+str1.hashCode());
        System.out.println("str2 haschcode : "+str2.hashCode());
        System.out.println("str3 haschcode : "+str3.hashCode());
        System.out.println("str4 haschcode : "+str4.hashCode());
        System.out.println("str5 haschcode : "+str5.hashCode());
        System.out.println("str6 haschcode : "+str6.hashCode());
        System.out.println("str7 haschcode : "+str7.hashCode());

        if(str2 == str4)
        {
            System.out.println("Strings are equal");
        }
        else
        {
            System.out.println("Strings are not equal");
        }

        if(str1.equals(str2))
        {
            System.out.println("Strings are equal");
        }
        else
        {
            System.out.println("Strings are not equal");
        }
    }
}