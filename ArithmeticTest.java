package main.java;


import java.util.Random;
import java.util.Scanner;




/*题目(2)：四则运算式生成器

        背景

某个小学老师请你为她编写一个能够自动生成四则运算练习题的小程序，要求输入年级和题目数量，程序根据年级输出规定数量的题目，具体要求如下：

·一年级运算数为20以内，只生成加法或减法运算式，结果小于20

·二年级运算数为50以内，生成加法和减法混合运算式，结果小于50

·三年级运算数为1000以内，生成加法、减法和乘法混合运算式

·四到六年级运算数为非负整数，生成至少带有三个运算符（从加减乘除四个符号中任选三个）和括号的混合运算式*/
public class ArithmeticTest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Input grade:");
        int grade = sc.nextInt();
        System.out.println("Input number");
        int n = sc.nextInt();
        Arithmetic arith;
        switch(grade){
            case 1:arith = new FirstGradeArithmetic();
                for(int i=0;i < n;i++) {
                    System.out.print(i+1+":");arith.operationGenerate();}break;
            case 2:arith = new SecondGradeArithmetic();
                for(int i=0;i < n;i++) {
                    System.out.print(i+1+":");arith.operationGenerate();}break;
            case 3:arith = new ThirdGradeArithmetic();
                for(int i=0;i < n;i++) {
                    System.out.print(i+1+":");arith.operationGenerate();}break;
            case 4:arith = new FourthToSixthGradeArithmetic();
                for(int i=0;i < n;i++) {
                    System.out.print(i+1+":");arith.operationGenerate();}break;
            case 5:arith = new FourthToSixthGradeArithmetic();
                for(int i=0;i < n;i++) {
                    System.out.print(i+1+":");arith.operationGenerate();}break;
            case 6:arith = new FourthToSixthGradeArithmetic();
                for(int i=0;i < n;i++) {
                    System.out.print(i+1+":");arith.operationGenerate();};break;
            default:
                System.out.println("ERROR");
        }

    }
}
abstract class Arithmetic{
    char OPER[] = {'+','-','*','/'};
    abstract void operSwap();
    abstract void operationGenerate();
}
class FirstGradeArithmetic extends Arithmetic{
    void operSwap(){};
    void operationGenerate(){
        Random rand = new Random();

        // 生成0到20之间的随机数
        int random_number = rand.nextInt(21);
        int OperationNumber1 = random_number;
        int OperationNumber2 = rand.nextInt((20-OperationNumber1)+1);
        char oper = OPER[rand.nextInt(2)];
        // 输出随机数
        System.out.println(""+OperationNumber1+' '+oper+' '+OperationNumber2+" = ");
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
    @Override
    void operationGenerate() {
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
        System.out.println(""+OperationNumber1Left+OperationNumber1+OperationNumber1Right+oper1
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
    void operationGenerate(){
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
        System.out.println(""+OperationNumber1+' '+oper1+' '+OperationNumber2+ ' '+oper2+' '
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
    void operationGenerate(){
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
        System.out.println(""+OperationNumber1+" "+oper1+" "+OperationNumber2
                +" "+oper2+" "+OperationNumber3
                +" "+oper3+" "+OperationNumber4+" = ");

    }
}
