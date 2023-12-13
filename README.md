# Course-Planner

## What was the problem you were solving in the projects for this course?
The primary challenge in this project was to efficiently manage and organize a complex set of course data, including course names, numbers, and prerequisites.
The problem was multifaceted, requiring a system that not only stores this information but also allows for quick retrieval and easy updates. The goal was to create a system that could handle these requirements in a scalable and user-friendly manner.

## How did you approach the problem? Consider why data structures are important to understand.
The approach to solving this problem was methodical and centered around the use of a binary tree data structure, as implemented in the CourseTree class.
The decision to use a binary tree was based on its efficiency in handling sorted data and its capability for fast retrieval, which is crucial in an educational setting where course data is frequently accessed and updated.
This approach also involved designing a user interface that allows for easy interaction with the system, including adding new courses, searching for specific courses, and displaying all courses in a structured format. 
The project underscored the critical role of data structures in software development. The choice of a binary tree was pivotal in achieving the project's objectives. This structure was ideal for the type of data and operations required by the course planner.
It facilitated efficient data storage, quick search capabilities, and an orderly way of displaying course information. Understanding and selecting the appropriate data structure was a key factor in the success of the project,
as it directly influenced the performance and usability of the application.

## How did you overcome any roadblocks you encountered while going through the activities or project?
Several challenges were encountered during the project. One significant hurdle was ensuring the binary tree remained balanced to maintain optimal search and retrieval times. This was addressed by refining the insertion algorithm. 
Another challenge was parsing and handling data from files, which required implementing comprehensive error checking and efficient data parsing techniques. 
These challenges were overcome through iterative testing and debugging, which also provided valuable insights into writing more robust and error-resistant code.

## How has your work on this project expanded your approach to designing software and developing programs?
This project profoundly influenced my approach to software design and development. It highlighted the importance of data structure selection and its impact on software performance. 
I learned to give more consideration to the scalability and efficiency of my code, especially for applications that handle large datasets. 
The project also reinforced the need for a user-centric design approach, ensuring that the software is not only functional but also intuitive and easy to use.

## How has your work on this project evolved the way you write programs that are maintainable, readable, and adaptable?
The project contributed significantly to my growth in writing maintainable, readable, and adaptable code:

Maintainability: By organizing the code into distinct classes with specific responsibilities, the system became easier to manage and update. This separation of concerns is crucial for long-term maintenance.

Readability: I placed a strong emphasis on writing clear, well-commented code. This practice is essential for collaborative environments and for any future modifications to the codebase.

Adaptability: The architecture of the project was designed with flexibility in mind. For instance, the CourseTree can be easily modified or extended to accommodate different types of data structures or additional features, such as course scheduling algorithms.
