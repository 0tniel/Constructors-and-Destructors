##  Constructors and Destructors in C++

### ** Overview**
<p>
In C++, <strong>constructors</strong> and <strong>destructors</strong> are special member functions that play a crucial role in object-oriented programming. They manage the initialization and cleanup of objects in a class, ensuring that resources are allocated and released properly.
</p>

### **🛠️ Constructors**
<p>
A <strong>constructor</strong> is a special member function that is automatically called when an object of a class is created. Its primary purpose is to initialize the object's data members.
</p>

#### **Syntax:**
<pre><code>class ClassName {
public:
    ClassName() {
        // Constructor code
    }
};
</code></pre>

#### **Types of Constructors:**

1. **Default Constructor**:
   <p>A constructor that does not take any arguments.</p>
   <pre><code>ClassName() {
       // Default constructor code
   }
   </code></pre>
   <br>

2. **Parameterized Constructor**:
   <p>A constructor that takes parameters to initialize the object's data members with specific values.</p>
   <pre><code>ClassName(int x, int y) {
       // Parameterized constructor code
   }
   </code></pre>
   <br>

3. **Copy Constructor**:
   <p>A constructor that creates a new object as a copy of an existing object.</p>
   <pre><code>ClassName(const ClassName &obj) {
       // Copy constructor code
   }
   </code></pre>
   <br>

### ** Destructors**
<p>
A <strong>destructor</strong> is a special member function that is automatically called when an object goes out of scope or is explicitly deleted. Its main purpose is to release resources allocated by the constructor or during the object's lifetime.
</p>

#### **Syntax:**
<pre><code>class ClassName {
public:
    ~ClassName() {
        // Destructor code
    }
};
</code></pre>

#### **Key Points:**
<ul>
<li>The destructor has the same name as the class, but it is preceded by a tilde (~).</li>
<li>Unlike constructors, a class can only have one destructor.</li>
<li>Destructors cannot be overloaded, take arguments, or return values.</li>
</ul>
<br>

## Aim
<p> To create a C++ program that defines a <code>Date</code> class, which is used to store and display the current date (day, month, and year) entered by the user. </p>

### Algorithm
<p> This algorithm describes the steps involved in the execution of the C++ program that creates a <code>Date</code> class to store and display the current date. </p>
Steps:
<ol> <li> <p><strong>Start</strong></p> </li> <li> <p><strong>Declare variables:</strong><br> <code>day</code>, <code>month</code>, and <code>year</code> as integers to store the day, month, and year respectively.</p> </li> <li> <p><strong>Create a class:</strong> Define a class named <code>Date</code> with the following components:</p> <ul> <li> <p><strong>Private Data Members:</strong><br> <code>day</code>, <code>month</code>, and <code>year</code> to store the date information.</p> </li> <li> <p><strong>Public Constructor:</strong><br> A constructor <code>Date(int d, int m, int y)</code> that initializes the <code>day</code>, <code>month</code>, and <code>year</code> with the values passed as arguments.</p> </li> <li> <p><strong>Public Method:</strong><br> A method <code>displayDate()</code> to display the date in the format "day/month/year".</p> </li> </ul> </li> <li> <p><strong>In the <code>main()</code> function:</strong></p> <ul> <li> <p>Prompt the user to enter today's date in the format <code>(day month year)</code>.</p> </li> <li> <p>Read the values for <code>day</code>, <code>month</code>, and <code>year</code> from the user input.</p> </li> <li> <p>Create an object <code>today</code> of the class <code>Date</code>, passing the user-input values as arguments to the constructor.</p> </li> <li> <p>Call the method <code>displayDate()</code> on the <code>today</code> object to display the entered date.</p> </li> </ul> </li> <li> <p><strong>Stop</strong></p> </li> </ol>
