Fault = Simulink.Bus;
elems(1)=Simulink.BusElement;
elems(1).Name="Volt";
elems(1).DataType="uint8";
elems(2)=Simulink.BusElement;
elems(2).Name="Temp";elems(2).DataType="uint8";
Fault.Elements=elems;