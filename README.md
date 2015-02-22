
## Build 
```
qmake 
make  
```
## installation
```
make install
```
This installs the module to /usr/lib/qt/qml/ApplicationLauncher/.

## usage
Write the stdout output of a program to a label:
```
import ApplicationLauncher 1.0

[...]

	Application{
        id: launcher  
        appName: "echo Hello World";
	}
	Timer {
		interval: plasmoid.configuration.Interval; 
		running: true;
		repeat: true;
		onTriggered: out.text = launcher.launchScriptGetSTDOUT(); 
	}
	PlasmaComponents.Label {
    	id: out;
    	text: "Default";
    }
```
