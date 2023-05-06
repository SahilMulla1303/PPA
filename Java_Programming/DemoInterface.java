//1. one class can inherite other class
class Demo
{}
class Hello extends Demo
{}

//2. one class can implement one interface
interface Demo
{}
class Hello implements Demo
{}

//3. one class can inherite one class and implements one interface
interface Demo
{}
class Hello
{}
class Marvellous extends Hello implements Demo
{}

//4. one interface can inherit another interface
interface Demo
{}
interface Hello extends Demo
{}
class Marvellous implements Hello
{}

//5. one class can implements more than one interface
interface Demo
{}
interface Hello
{}
class Marvellous implements Demo, Hello
{}

public class DemoInterface {
    
}
