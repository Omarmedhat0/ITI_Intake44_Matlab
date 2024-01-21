% Set the hold on to add subsequent plots to the existing axes
hold on

% Define parameters for the first rectangle(The body of Traffic Light)
rect_x_axis_start = 20 ;
rect_y_axis_start =15 ;
rect_width = 10 ;
rect_height = 30 ;

% Define parameters for the second rectangle
%(the supporting of traffic light)
support_x_axis_start = 24 ;
support_y_axis_start =5 ;
support_width = 2 ;
support_height = 10;

% Define parameters for the circle of each led in traffic light
circle_radius = 4 ;
theta = 0 :0.1 : 2*pi ;

% Define parameters for the stopping light
circle1_center_x_axis = circle_radius*cos(theta)+25 ;
circle1_center_y_axis = circle_radius*sin(theta)+40 ;

% Define parameters for the waiting light
circle2_center_x_axis = circle_radius*cos(theta)+25 ;
circle2_center_y_axis = circle_radius*sin(theta)+30 ;

% Define parameters for the going light
circle3_center_x_axis = circle_radius*cos(theta)+25 ;
circle3_center_y_axis = circle_radius*sin(theta)+20 ;
%****************************************************************************************

% Plot the first filled rectangle filled with (black)which is the body of Traffic Light
rectangle('Position',[rect_x_axis_start , rect_y_axis_start , rect_width , rect_height] , 'Curvature', [0.2, 0.2] ,'FaceColor', 'k');

% Plot the second filled rectangle filled with (grey)which is the supporting of traffic light
rectangle('Position',[support_x_axis_start , support_y_axis_start , support_width , support_height] , 'Curvature', [0.2, 0.2] ,'FaceColor', [152, 152, 152]/255);
% Plot the first diagonal line on the supporting of traffic light
line([support_x_axis_start, support_x_axis_start + support_width], [11,14], 'Color', [250, 220, 19]/255, 'LineWidth', 2);
% Plot the second diagonal line on the supporting of traffic light
line([support_x_axis_start, support_x_axis_start + support_width], [6,9], 'Color', [250, 220, 19]/255, 'LineWidth', 2);

% Plot the circle of the stopping light with dim light of red at initialization
fill(circle1_center_x_axis,circle1_center_y_axis,[110, 0, 0]/255);
% Plot the circle of the waiting light with dim light of yellow at initialization 
fill(circle2_center_x_axis,circle2_center_y_axis,[99, 110, 0]/255);
% Plot the circle of the going light with dim light of green at initialization
fill(circle3_center_x_axis,circle3_center_y_axis,[0, 110, 15]/255); 

% Set x and y axis limits
xlim([0 50]),ylim([0 50]),
% Turn on grid
grid on

% Enter an infinite loop
while true
    %Illuminate red light on and turn off the other lights
    fill(circle1_center_x_axis,circle1_center_y_axis,[255, 0, 0]/255);
    % Pause for 2 seconds
    pause(2);
    
    %Turn red light off 
    fill(circle1_center_x_axis,circle1_center_y_axis,[110, 0, 0]/255);
    %Illuminate yellow light on and turn off the other lights
    fill(circle2_center_x_axis,circle2_center_y_axis,[255, 255, 0]/255); 
    % Pause for 2 seconds
    pause(2);
    
    %Turn yellow light off 
    fill(circle2_center_x_axis,circle2_center_y_axis,[99, 110, 0]/255);
    %Illuminate green light on and turn off the other lights
    fill(circle3_center_x_axis,circle3_center_y_axis,[0, 255, 0]/255); 
     % Pause for 2 seconds
    pause(2);
    
    %Turn green light off 
    fill(circle3_center_x_axis,circle3_center_y_axis,[0, 110, 15]/255); 
end
