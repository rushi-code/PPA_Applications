// 1. One class can inherite another class

class Demo
{}
class Hello extends Demo
{}

// 2. One class can implement one interface

interface Demo
{}
class Hello implements Demo
{}

//3. One class can inherite one class and implements one interface at time

interface Demo
{}
class Hello
{}
class Marvellous extends Hello implements Demo
{}

//4. One interface can inherite another interface

interface Demo
{}
interface Hello extends Demo

//5. One class can implements more than one interfaces

interface Demo
{}
interface Hello
{}
class Marvellous implements Demo, Hello
{}