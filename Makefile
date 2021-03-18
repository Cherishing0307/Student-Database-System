a4:	main.o Student.o Course.o Storage.o Control.o View.o Monitor.o GPAMonitor.o FWMonitor.o CourseList.o List.h StuServer.o
	g++ -o a4 main.o Student.o Course.o Storage.o Control.o View.o Monitor.o GPAMonitor.o FWMonitor.o CourseList.o List.h StuServer.o

main.o:	main.cc Control.h
	g++ -c main.cc

Student.o:	Student.cc Student.h Course.h defs.h CourseList.h
	g++ -c Student.cc

Course.o:	Course.cc Course.h
	g++ -c Course.cc

Storage.o: Storage.cc Storage.h Student.h defs.h
	g++ -c Storage.cc

Control.o: Control.h Control.cc Storage.h View.h Monitor.h GPAMonitor.h FWMonitor.h
	g++ -c Control.cc

View.o: View.h View.cc Storage.h
	g++ -c View.cc

Monitor.o: Monitor.cc Monitor.h Student.h
	g++ -c Monitor.cc

GPAMonitor.o: GPAMonitor.cc GPAMonitor.h Monitor.h Student.h
	g++ -c GPAMonitor.cc

FWMonitor.o: FWMonitor.cc FWMonitor.h Monitor.h Student.h
	g++ -c FWMonitor.cc

CourseList.o: CourseList.cc CourseList.h Course.h List.h
	g++ -c CourseList.cc

clean:
	rm -f main.o Control.o Course.o Student.o Storage.o View.o FWMonitor.o Monitor.o GPAMonitor.o CourseList.o a4
