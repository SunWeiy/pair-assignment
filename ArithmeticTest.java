package main.java;


import org.junit.Test;

import java.util.Random;
import java.util.Scanner;




/*题目(2)：四则运算式生成器

        背景

某个小学老师请你为她编写一个能够自动生成四则运算练习题的小程序，要求输入年级和题目数量，程序根据年级输出规定数量的题目，具体要求如下：

·一年级运算数为20以内，只生成加法或减法运算式，结果小于20

·二年级运算数为50以内，生成加法和减法混合运算式，结果小于50

·三年级运算数为1000以内，生成加法、减法和乘法混合运算式

·四到六年级运算数为非负整数，生成至少带有三个运算符（从加减乘除四个符号中任选三个）和括号的混合运算式*/
class Menu{
    static void doMenu(){
        System.out.println("1:Generate and specify the number of math problems to create.");
        System.out.println("2:Personalized customization");
    }
}

public class ArithmeticTest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Menu.doMenu();
        System.out.println("What is your choice?");
        int choice = sc.nextInt();
        if(choice == 1){
            System.out.println("Input grade:");
            int grade = sc.nextInt();
            System.out.println("Input number");
            int n = sc.nextInt();
            Arithmetic arith;
            switch(grade){
                case 1:
                    arith = new FirstGradeArithmetic();
                    for(int i=0;i < n;i++) {
                        System.out.print(i+1+":");
                        System.out.println(arith.operationGenerate());}break;
                case 2:arith = new SecondGradeArithmetic();
                    for(int i=0;i < n;i++) {
                        System.out.print(i+1+":");
                        System.out.println(arith.operationGenerate());}break;
                case 3:arith = new ThirdGradeArithmetic();
                    for(int i=0;i < n;i++) {
                        System.out.print(i+1+":");
                        System.out.println(arith.operationGenerate());}break;
                case 4:
                    arith = new FourthToSixthGradeArithmetic();
                    for(int i=0;i < n;i++) {
                        System.out.print(i+1+":");

                            System.out.println(arith.operationGenerate());
                        };break;
                case 5:
                    arith = new FourthToSixthGradeArithmetic();
                    for(int i=0;i < n;i++) {
                        System.out.print(i+1+":");
                        System.out.println(arith.operationGenerate());}break;
                case 6:
                    arith = new FourthToSixthGradeArithmetic();
                    for(int i=0;i < n;i++) {
                        System.out.print(i+1+":");
                        System.out.println(arith.operationGenerate());};break;
                default:
                    System.out.println("ERROR");break;
            }
        }
        else {
            System.out.println("Input grade:");
            int grade = sc.nextInt();
            System.out.println("Input number");
            int n = sc.nextInt();
            System.out.println("Would you like to select an operator: 1 for selection, 0 for no selection.");
            int operx = sc.nextInt();
            System.out.println("Would you like to set a maximum number: 1 for setting, 0 for using default value.");
            int maxsel = sc.nextInt();
            int parentheses = 0;


            char OPERx[] = {0,0,0,0,0,0,0,0};
            int max = 0;

            Arithmetic arith;
            switch (grade) {
                case 1:
                    if (operx == 1) {
                        System.out.println("What operation would you like to select? (+ or -)");
                        String s1 = sc.next();
                        s1 = s1.replace(" ","");
                        OPERx = s1.toCharArray();
                    }else {
                        OPERx[0] = '+';
                        OPERx[1] = '-';
                    }

                    if(maxsel == 1){
                        System.out.println("Please enter the maximum value of the operands.");
                        max = sc.nextInt();

                    }else{
                        max = 20;
                    }

                    FirstGradeArithmetic rith1 = new FirstGradeArithmetic();
                    for (int i = 0; i < n; i++) {
                        System.out.print(i + 1 + ":");
                        System.out.println(rith1.operationGenerate(OPERx,max));
                    }
                    break;
                case 2:
                    if (operx == 1) {
                        System.out.println("What operation would you like to select? ");
                        sc.nextLine();
                        String s1 = sc.nextLine();
                        s1 = s1.replace(" ","");
                        OPERx = s1.toCharArray();
                    }else {
                        OPERx[0] = '+';
                        OPERx[1] = '-';
                    }

                    if(maxsel == 1){
                        System.out.println("Please enter the maximum value of the operands.");
                        max = sc.nextInt();

                    }else{
                        max = 50;
                    }
                    SecondGradeArithmetic rith2 = new SecondGradeArithmetic();
                    for (int i = 0; i < n; i++) {
                        System.out.print(i + 1 + ":");
                        System.out.println(rith2.operationGenerate(OPERx,max));
                    }
                    break;
                case 3:
                    if (operx == 1) {
                        System.out.println("What operation would you like to select? ");
                        sc.nextLine();
                        String s1 = sc.nextLine();
                        s1 = s1.replace(" ","");
                        OPERx = s1.toCharArray();
                    }else {
                        OPERx[0] = '+';
                        OPERx[1] = '-';
                        OPERx[2] = '*';
                    }

                    if(maxsel == 1){
                        System.out.println("Please enter the maximum value of the operands.");
                        max = sc.nextInt();

                    }else{
                        max = 1000;
                    }
                    ThirdGradeArithmetic rith3 = new ThirdGradeArithmetic();
                    for (int i = 0; i < n; i++) {
                        System.out.print(i + 1 + ":");
                        System.out.println(rith3.operationGenerate(OPERx,max));
                    }
                    break;
                case 4:
                    if (operx == 1) {
                        System.out.println("What operation would you like to select? ");
                        sc.nextLine();
                        String s1 = sc.nextLine();
                        s1 = s1.replace(" ","");
                        OPERx = s1.toCharArray();
                    }else {
                        OPERx[0] = '+';
                        OPERx[1] = '-';
                        OPERx[2] = '*';
                        OPERx[3] = '/';
                    }

                    if(maxsel == 1){
                        System.out.println("Please enter the maximum value of the operands.");
                        max = sc.nextInt();

                    }else{
                        max = 1999;
                    }
                    System.out.println("How would you choose if there are parentheses?");
                    parentheses = sc.nextInt();
                    FourthToSixthGradeArithmetic rith4 = new FourthToSixthGradeArithmetic();
                    for (int i = 0; i < n; i++) {
                        System.out.print(i + 1 + ":");
                        System.out.println(rith4.operationGenerate(OPERx,max,parentheses));


                    }
                    break;
                case 5:
                    if (operx == 1) {
                        System.out.println("What operation would you like to select? ");
                        sc.nextLine();
                        String s1 = sc.nextLine();
                        s1 = s1.replace(" ","");
                        OPERx = s1.toCharArray();
                    }else {
                        OPERx[0] = '+';
                        OPERx[1] = '-';
                        OPERx[2] = '*';
                        OPERx[3] = '/';
                    }

                    if(maxsel == 1){
                        System.out.println("Please enter the maximum value of the operands.");
                        max = sc.nextInt();

                    }else{
                        max = 1999;
                    }
                    System.out.println("How would you choose if there are parentheses?");
                    parentheses = sc.nextInt();
                    FourthToSixthGradeArithmetic rith5 = new FourthToSixthGradeArithmetic();
                    for (int i = 0; i < n; i++) {
                        System.out.print(i + 1 + ":");
                        System.out.println(rith5.operationGenerate(OPERx,max,parentheses));


                    }
                    break;
                case 6:
                    if (operx == 1) {
                        System.out.println("What operation would you like to select? ");
                        sc.nextLine();
                        String s1 = sc.nextLine();
                        s1 = s1.replace(" ","");
                        OPERx = s1.toCharArray();
                    }else {
                        OPERx[0] = '+';
                        OPERx[1] = '-';
                        OPERx[2] = '*';
                        OPERx[3] = '/';
                    }

                    if(maxsel == 1){
                        System.out.println("Please enter the maximum value of the operands.");
                        max = sc.nextInt();

                    }else{
                        max = 1999;
                    }
                    System.out.println("How would you choose if there are parentheses?");
                    parentheses = sc.nextInt();
                    FourthToSixthGradeArithmetic rith6 = new FourthToSixthGradeArithmetic();
                    for (int i = 0; i < n; i++) {
                        System.out.print(i + 1 + ":");
                        System.out.println(rith6.operationGenerate(OPERx,max,parentheses));


                    }
                    break;
                default:
                    System.out.println("ERROR");
                    break;
            }
        }

    }
}
abstract class Arithmetic{
    char OPER[] = {'+','-','*','/'};
    abstract void operSwap();
    abstract String operationGenerate();
//    abstract String operationGenerate(char []arr);
}
class FirstGradeArithmetic extends Arithmetic{
    void operSwap(){};
    String operationGenerate(){
        Random rand = new Random();

        // 生成0到20之间的随机数
        int random_number = rand.nextInt(21);
        int OperationNumber1 = random_number;
        int OperationNumber2 = rand.nextInt((20-OperationNumber1)+1);
        char oper = OPER[rand.nextInt(2)];
        // 输出随机数
        return (""+OperationNumber1+' '+oper+' '+OperationNumber2+" = ");
    }
//    String operationGenerate(char []arr){
//        OPER = arr;
//        Random rand = new Random();
//
//        // 生成0到20之间的随机数
//        int random_number = rand.nextInt(21);
//        int OperationNumber1 = random_number;
//        int OperationNumber2 = rand.nextInt((20-OperationNumber1)+1);
//        char oper = OPER[rand.nextInt(1)];
//        // 输出随机数
//        return (""+OperationNumber1+' '+oper+' '+OperationNumber2+" = ");
//    }
    String operationGenerate(char[] arr,int max){
        Random rand = new Random();
        OPER = arr;
        // 生成0到20之间的随机数
        int random_number = rand.nextInt(max+1);
        int OperationNumber1 = random_number;
        int OperationNumber2 = rand.nextInt((max+1-OperationNumber1));
        char oper = OPER[rand.nextInt(arr.length)];
        // 输出随机数
        return (""+OperationNumber1+' '+oper+' '+OperationNumber2+" = ");
    }
}

class FourthToSixthGradeArithmetic extends Arithmetic{
    void operSwap(){};
    void operSwap(int n){
        char t = OPER[n];
        for(int i=n+1; i<OPER.length ;i++){
            OPER[i-1] = OPER[i];
        }
        OPER[OPER.length-1] = t;
    }
    String operationGenerate(char[] arr){
        return "";
    }
    @Override
    String operationGenerate() {
        Random rand = new Random();
        //初始化
        int OperationNumber1 = rand.nextInt();
        if(OperationNumber1<0){
            OperationNumber1 *= -1;
        }
        int OperationNumber2 = rand.nextInt();
        if(OperationNumber2<0){
            OperationNumber2 *= -1;
        }
        int OperationNumber3 = rand.nextInt();
        if(OperationNumber3<0){
            OperationNumber3 *= -1;
        }
        int OperationNumber4 = rand.nextInt();
        if(OperationNumber4<0){
            OperationNumber4 *= -1;
        }
        char oper1 = 0;
        char oper2 = 0;
        char oper3 = 0;
        String OperationNumber1Left = " ";
        String OperationNumber1Right = " ";//这个位置是不必要的
        String OperationNumber2Left = " ";
        String OperationNumber2Right = " ";
        String OperationNumber3Left = " ";
        String OperationNumber3Right = " ";
        String OperationNumber4Left = " ";//这个位置是不必要的
        String OperationNumber4Right = " ";

        int x = rand.nextInt(3);
        oper1 = OPER[x];
        operSwap(x);
        x = rand.nextInt(2);
        oper2 = OPER[x];
        operSwap(x);
        x = rand.nextInt(1);
        oper3 = OPER[x];
        int n = rand.nextInt(3);
        if(n == 0){

        } else if (n == 1) {
            int t = rand.nextInt(3);//选位置
            if(t == 0){
                OperationNumber1Left = " (";
                OperationNumber2Right = ") ";
            } else if (t == 1) {
                OperationNumber2Left = " (";
                OperationNumber3Right = ") ";
            } else if (t == 2) {
                OperationNumber3Left = " (";
                OperationNumber4Right = ") ";
            }
        } else{
            int t = rand.nextInt(2);//是否内嵌，0不内嵌
            if(t == 0){
                OperationNumber1Left = " (";
                OperationNumber2Right = ") ";
                OperationNumber3Left = " (";
                OperationNumber4Right = ") ";
            }else{
                int loc = rand.nextInt(3);//判别位置
                if(loc == 0){
                    OperationNumber1Left = " ((";
                    OperationNumber2Right = ") ";
                    OperationNumber3Right = ") ";
                } else if (loc == 1) {
                    int lr = rand.nextInt(2);//判别左右0l1r
                    if(lr==0){
                        OperationNumber3Right = ")) ";
                        OperationNumber1Left = " (";
                        OperationNumber2Left = " (";
                    }else {
                        OperationNumber2Left = " ((";
                        OperationNumber3Right = ") ";
                        OperationNumber4Right = ") ";
                    }
                } else if (loc == 2) {
                    OperationNumber2Left = " ((";
                    OperationNumber3Right = ") ";
                    OperationNumber4Right = ") ";
                }
            }
        }
        return (""+OperationNumber1Left+OperationNumber1+OperationNumber1Right+oper1
                +OperationNumber2Left+OperationNumber2+OperationNumber2Right+oper2
                +OperationNumber3Left+OperationNumber3+OperationNumber3Right+oper3+OperationNumber4Left
                +OperationNumber4+OperationNumber4Right+"=");
    }
    String operationGenerate(char[] arr,int max,int a) {
        OPER = arr;
        Random rand = new Random();
        //初始化
        int OperationNumber1 = rand.nextInt(max+1);
        if(OperationNumber1<0){
            OperationNumber1 *= -1;
        }
        int OperationNumber2 = rand.nextInt(max+1);
        if(OperationNumber2<0){
            OperationNumber2 *= -1;
        }
        int OperationNumber3 = rand.nextInt(max+1);
        if(OperationNumber3<0){
            OperationNumber3 *= -1;
        }
        int OperationNumber4 = rand.nextInt(max+1);
        if(OperationNumber4<0){
            OperationNumber4 *= -1;
        }
        char oper1 = 0;
        char oper2 = 0;
        char oper3 = 0;
        String OperationNumber1Left = " ";
        String OperationNumber1Right = " ";//这个位置是不必要的
        String OperationNumber2Left = " ";
        String OperationNumber2Right = " ";
        String OperationNumber3Left = " ";
        String OperationNumber3Right = " ";
        String OperationNumber4Left = " ";//这个位置是不必要的
        String OperationNumber4Right = " ";
        int n=0;
        int x = rand.nextInt(3);
        oper1 = OPER[x];
        operSwap(x);
        x = rand.nextInt(2);
        oper2 = OPER[x];
        operSwap(x);
        x = rand.nextInt(1);
        oper3 = OPER[x];
        if(a==1){
            n = rand.nextInt(2)+1;
        }else{
            n = 0;
        }
        if(n == 0){

        } else if (n == 1) {
            int t = rand.nextInt(3);//选位置
            if(t == 0){
                OperationNumber1Left = " (";
                OperationNumber2Right = ") ";
            } else if (t == 1) {
                OperationNumber2Left = " (";
                OperationNumber3Right = ") ";
            } else if (t == 2) {
                OperationNumber3Left = " (";
                OperationNumber4Right = ") ";
            }
        } else{
            int t = rand.nextInt(2);//是否内嵌，0不内嵌
            if(t == 0){
                OperationNumber1Left = " (";
                OperationNumber2Right = ") ";
                OperationNumber3Left = " (";
                OperationNumber4Right = ") ";
            }else{
                int loc = rand.nextInt(3);//判别位置
                if(loc == 0){
                    OperationNumber1Left = " ((";
                    OperationNumber2Right = ") ";
                    OperationNumber3Right = ") ";
                } else if (loc == 1) {
                    int lr = rand.nextInt(2);//判别左右0l1r
                    if(lr==0){
                        OperationNumber3Right = ")) ";
                        OperationNumber1Left = " (";
                        OperationNumber2Left = " (";
                    }else {
                        OperationNumber2Left = " ((";
                        OperationNumber3Right = ") ";
                        OperationNumber4Right = ") ";
                    }
                } else if (loc == 2) {
                    OperationNumber2Left = " ((";
                    OperationNumber3Right = ") ";
                    OperationNumber4Right = ") ";
                }
            }
        }
        return (""+OperationNumber1Left+OperationNumber1+OperationNumber1Right+oper1
                +OperationNumber2Left+OperationNumber2+OperationNumber2Right+oper2
                +OperationNumber3Left+OperationNumber3+OperationNumber3Right+oper3+OperationNumber4Left
                +OperationNumber4+OperationNumber4Right+"=");
    }
}

class SecondGradeArithmetic extends Arithmetic{
    void operSwap(){
        char t = OPER[1];
        OPER[1] = OPER[0];
        OPER[0] = t;
    };
    String operationGenerate(char[] arr){
        return "";
    }
    String operationGenerate(){
        Random rand = new Random();
        int OperationNumber2 = 0;
        int OperationNumber3 = 0;
        // 生成0到20之间的随机数
        int random_number = rand.nextInt(51);
        int OperationNumber1 = random_number;
        char oper1 = OPER[rand.nextInt(2)];
        char oper2 = 0;
        if(oper1 == '+') {
            OperationNumber2 = rand.nextInt((50 - OperationNumber1) + 1);
            operSwap();
            oper2 = OPER[rand.nextInt(1)];
            OperationNumber3 = rand.nextInt(51);
        }else{
            OperationNumber2 = rand.nextInt(51);

            oper2 = OPER[rand.nextInt(1)];
            OperationNumber3 = rand.nextInt((50-(OperationNumber1-OperationNumber2))+1);
        }
        // 输出随机数
        return (""+OperationNumber1+' '+oper1+' '+OperationNumber2+ ' '+oper2+' '
                +OperationNumber3+" = ");
    }
    String operationGenerate(char[]arr,int max){
        OPER = arr;
        Random rand = new Random();
        int OperationNumber2 = 0;
        int OperationNumber3 = 0;
        // 生成0到20之间的随机数
        int random_number = rand.nextInt(max+1);
        int OperationNumber1 = random_number;
        char oper1 = OPER[rand.nextInt(2)];
        char oper2 = 0;
        if(oper1 == '+') {
            OperationNumber2 = rand.nextInt((max+1 - OperationNumber1));
            operSwap();
            oper2 = OPER[rand.nextInt(1)];
            OperationNumber3 = rand.nextInt(max+1);
        }else{
            OperationNumber2 = rand.nextInt(max+1);

            oper2 = OPER[rand.nextInt(1)];
            OperationNumber3 = rand.nextInt((max+1-OperationNumber1));
        }
        // 输出随机数
        return (""+OperationNumber1+' '+oper1+' '+OperationNumber2+ ' '+oper2+' '
                +OperationNumber3+" = ");
    }
}

class ThirdGradeArithmetic extends Arithmetic{
    char[] OPER= {'+','-','*'};
    void operSwap(){
    };
    void operSwap(int n){
        char t = OPER[n];
        for(int i=n+1; i<OPER.length ;i++){
            OPER[i-1] = OPER[i];
        }
        OPER[OPER.length-1] = t;
    }
    String operationGenerate(char[] arr){
        return "";
    }
    String operationGenerate(){
        Random rand = new Random();
        int OperationNumber2 = 0;
        int OperationNumber3 = 0;
        int OperationNumber4 = 0;
        int x = 0;
        // 生成0到20之间的随机数
        int random_number = rand.nextInt(1001);
        int OperationNumber1 = random_number;
        x = rand.nextInt(3);
        char oper1 = OPER[x];
        operSwap(x);
        x = rand.nextInt(2);
        char oper2 = OPER[x];
        operSwap(x);
        x = rand.nextInt(1);
        char oper3 = OPER[x];
        OperationNumber2 = rand.nextInt(1001);
        OperationNumber3 = rand.nextInt(1001);
        OperationNumber4 = rand.nextInt(1001);
        return (""+OperationNumber1+" "+oper1+" "+OperationNumber2
                +" "+oper2+" "+OperationNumber3
                +" "+oper3+" "+OperationNumber4+" = ");

    }
    String operationGenerate(char[] arr,int max){
        OPER = arr;
        Random rand = new Random();
        int OperationNumber2 = 0;
        int OperationNumber3 = 0;
        int OperationNumber4 = 0;
        int x = 0;
        // 生成0到20之间的随机数
        int random_number = rand.nextInt(max+1);
        int OperationNumber1 = random_number;
        x = rand.nextInt(3);
        char oper1 = OPER[x];
        operSwap(x);
        x = rand.nextInt(2);
        char oper2 = OPER[x];
        operSwap(x);
        x = rand.nextInt(1);
        char oper3 = OPER[x];
        OperationNumber2 = rand.nextInt(max+1);
        OperationNumber3 = rand.nextInt(max+1);
        OperationNumber4 = rand.nextInt(max+1);
        return (""+OperationNumber1+" "+oper1+" "+OperationNumber2
                +" "+oper2+" "+OperationNumber3
                +" "+oper3+" "+OperationNumber4+" = ");

    }
}
