# QTMultiwindowExample
A simple multiwindow example using signals and slots.

There is a MainWindow class that controls the Main Window view. A second window controlled by Website class.

The two classes are connected so that when you click a button on the Website window something happens in the MainWindow (a text label is changed).

The keypoints are the connections between signals and slots and the management of windows pointers or references.


Created for [Stack Overflow Documentation example](http://stackoverflow.com/documentation/qt/2136/signals-and-slots/26119/multi-window-signal-slot-connection) and as an answer to this [Stack Overflow question](http://stackoverflow.com/questions/40983377/qt-slots-and-signals-showing-2nd-form-window/40986941#40986941)
