function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["DetectEvorOd.c:56c33"]=1;
    this.traceFlag["EvenOrOdd.c:39c43"]=1;
    this.traceFlag["EvenOrOdd.c:40c5"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["DetectEvorOd.c:56"]=1;
    this.lineTraceFlag["DetectEvorOd.c:60"]=1;
    this.lineTraceFlag["DetectEvorOd.c:68"]=1;
    this.lineTraceFlag["DetectEvorOd.h:33"]=1;
    this.lineTraceFlag["DetectEvorOd.h:34"]=1;
    this.lineTraceFlag["EvenOrOdd.c:39"]=1;
    this.lineTraceFlag["EvenOrOdd.c:40"]=1;
    this.lineTraceFlag["EvenOrOdd.h:43"]=1;
    this.lineTraceFlag["EvenOrOdd.h:48"]=1;
    this.lineTraceFlag["EvenOrOdd.h:53"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
