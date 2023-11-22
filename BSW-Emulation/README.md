# FanControl ECU Description

The FanControl ECU has one SWC that converts the power that it has as in input to a Desired Fan Speed, then based on this value it generates a PWM signal that gives to a simulated fan Model.

This Fan Model developed with CAPL, is turned on and off based on PWM duty cycle, thus generates rotation, the measured fan speed is then given back to the FanControl through a PropotionalIntegrator regulator so that the ECU can generate a more accurate PWM Signal to achieve the Desired Fan Speed

This ECU is able to detect if the fan model is faulty (either it's not working at all, or it's not responsive/stuck) this information is then communicated back to the system to stop allocating power to the faulty fan

<div class="archi-image" align="center">
    <img src="images/Fangraph.PNG" alt="drawing" width="80%" height=80% /> 
</div>
