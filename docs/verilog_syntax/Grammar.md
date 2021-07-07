# EDE Verilog Subset Grammar

&lt;source_text&gt; ::= &lt;module&gt;

&lt;module&gt; ::= &lt;name_of_module&gt; &lt;list_of_ports&gt; &lt;module_item&gt; &lt;endmodule&gt;

&lt;list_of_ports&gt; ::= &lt;port&gt; &lt;list_of_ports_expand&gt;


&lt;list_of_ports_expand&gt; ::= : NULL 
								  | , &lt;port&gt; &lt;list_of_ports_expand&gt;

&lt;module_item&gt; ::= &lt;module_item_expanded&gt;


&lt;module_item_expanded&gt; ::= : NULL 
								 | , &lt;mod_item&gt; &lt;module_item_expanded&gt;


&lt;name_of_module&gt; ::= IDENTIFIER


&lt;port&gt; ::= : &lt;port_expression&gt; 
           | . &lt;name_of_port&gt; ( &lt;port_expression&gt; )

           
&lt;port_expression&gt; ::= : &lt;port_reference&gt; 
						   | { &lt;port_reference&gt; &lt;port_reference_expanded&gt; }
						   
						   
&lt;port_reference_expanded&gt; ::= , &lt;port_reference&gt; &lt;port_reference_expanded&gt;

&lt;port_reference&gt; ::= : &lt;name_of_variable&gt; 
                     | &lt;name_of_variable&gt; [ &lt;constant_expression&gt; ] 
                     | &lt;name_of_variable&gt; [ &lt;constant_expression&gt; : &lt;constant_expression&gt;]
                     
 
&lt;name_of_port&gt; ::= IDENTIFIER

&lt;mod_item&gt; ::= : &lt;input_declaration&gt; 
				  | &lt;output_declaration&gt; 
				  | &lt;net_declaration&gt;
				  | &lt;reg_declaration&gt;
				  | &lt;integer_declaration&gt; 
				  | &lt;real_declaration&gt;
				  | &lt;gate_declaration&gt;
				  | &lt;module_instantiation&gt; 
				  | &lt;continuous_assign&gt;
				  | &lt;initial_statement&gt; 
				  | &lt;always_statement&gt;
				  | &lt;task&gt;
				  | &lt;function&gt;

# Declarations

&lt;input_declaration&gt; ::= INPUT &lt;range&gt; &lt;list_of_variables&gt; ;

&lt;p&gt;output_declaration ::= OUTPUT &lt;range&gt; &lt;list_of_variables&gt; ;
&lt;p&gt;net_declaration ::= WIRE &lt;range&gt; &lt;delay&gt; &lt;list_of_variables&gt; ;
&lt;p&gt;reg_declaration ::= REG &lt;range&gt; &lt;list_of_register_variables&gt; ;
&lt;p&gt;real_declaration ::= REAL &lt;list_of_variables&gt; ;
&lt;p&gt;integer_declaration ::= INTEGER &lt;list_of_variables&gt; ;
&lt;p&gt;continious_assign ::= ASSIGN &lt;delay&gt; &lt;list_of_assignments&gt; ;

&lt;list_of_variables&gt; ::= : &lt;name_of_variable&gt; &lt;name_of_variable_expaned&gt; 
							  | WIRE &lt;range&gt; &lt;delay&gt; &lt;list_of_assignments&gt; ;
							  
&lt;name_of_variable_expanded&gt; ::= : NULL 
										| , &lt;name_of_variable&gt; &lt;name_of_variable_expanded&gt;
										 
&lt;name_of_variable&gt; ::= IDENTIFIER

&lt;list_of_register_variables&gt; ::= &lt;register_variable&gt; &lt;register_variable_expanded&gt;

&lt;register_variable_expanded&gt; ::= , &lt;register_variable&gt; &lt;register_variable_expanded&gt;

&lt;register_variable&gt; ::= : &lt;name_of_register&gt; 
                        | &lt;name_of_memory&gt; [ &lt;constant_expression&gt; : &lt;constant_expression&gt; ]
                        
&lt;name_of_register&gt; ::= IDENTIFIER
&lt;name_of_memory&gt; ::= IDENTIFIER

&lt;range&gt; ::= [ &lt;constant_expression&gt; : &lt;constant_expression&gt; ]

&lt;list_of_assignments&gt; ::= &lt;assignment&gt; &lt;assignment_expanded&gt;

&lt;assignment_expanded&gt; ::= : NULL 
								| , &lt;assignment&gt; &lt;assignment_expanded&gt;

# Primative Instances

&lt;gate_declaration&gt; ::= GATETYPE &lt;delay&gt; &lt;gate_instance&gt; &lt;gate_instance_expanded&gt; ;&lt;/p&gt;

&lt;gate_instance_expanded&gt; ::= : NULL 
									| , &lt;gate_instance&gt; &lt;gate_instance_expanded&gt;

&lt;gate_instance&gt; ::= &lt;name_of_gate_instance&gt; ( &lt;terminal&gt; &lt;terminal_expanded&gt; )

&lt;name_of_gate_instance&gt; ::= IDENTIFIER &lt;range&gt;

&lt;terminal_expanded&gt; ::= : NULL 
							 | , &lt;terminal&gt; &lt;terminal_expanded&gt;
							 
&lt;terminal&gt; ::= : &lt;expression&gt; 
				  | IDENTIFIER

# Module Instantiations

&lt;module_instantiation&gt; ::= &lt;name_of_module&gt;  &lt;module_instance&gt; &lt;module_instance_expanded&gt; ;

&lt;module_instance_expanded&gt; ::= : NULL 
									  | , &lt;module_instance&gt; &lt;module_instance_expanded&gt;

&lt;name_of_module&gt; ::= IDENTIFIER

&lt;module_instance&gt; ::= &lt;name_of_instance&gt; ( &lt;list_of_module_connections&gt; )

&lt;list_of_module_connections&gt; ::= : &lt;module_port_connection&gt; &lt;module_port_connections_expanded&gt; 
										 | &lt;named_port_connection&gt; &lt;named_port_connection_expanded&gt;


&lt;module_port_connections_expanded&gt; ::= , &lt;module_port_connection&gt; &lt;module_port_connections_expanded&gt;

&lt;named_port_connection&gt; ::= : &lt;expression&gt; 
								  | NULL

NULL ::= /* nothing ex (a, b, , d) */

&lt;named_port_connection&gt; ::= . IDENTIFIER ( &lt;expression&gt; )


# Behavorial Statements

&lt;initial_statement&gt; ::= INITIAL statement
&lt;always_statement&gt; ::= ALWAYS statement

&lt;statement_or_null&gt; ::= statement | NULL ;

&lt;statement&gt; ::= : &lt;blocking_assignment&gt; ; 
				   	| &lt;non_blocking_assignment&gt; ; 
					| IF ( &lt;expression&gt; ) &lt;statement_or_null&gt; 
				  	| IF ( &lt;expression&gt; ) &lt;statement_or_null&gt; ELSE &lt;statement_or_null&gt; 
				  	| CASE ( &lt;expression&gt; ) &lt;case_item&gt; &lt;case_item_expanded&gt; ENDCASE 
				  	| CASEX ( &lt;expression&gt; ) &lt;case_item&gt; &lt;case_item_expanded&gt; ENDCASE 
				  	| CASEZ ( &lt;expression&gt; ) &lt;case_item&gt; &lt;case_item_expanded&gt; ENDCASE 
				  	| FOREVER &lt;statement&gt; 
				  	| repeat ( &lt;expression&gt; ) &lt;statement&gt; 
				  	| while ( &lt;expression&gt; ) &lt;statement&gt; 
				  	| for ( &lt;assignment&gt; ; &lt;expression&gt; ; &lt;assignment&gt; ) &lt;statement&gt; 
				  	| wait ( &lt;expression&gt; ) &lt;statement_or_null&gt; 
				  	| &lt;seq_block&gt; 
				  	| &lt;task_enable&gt; 
				  	| &lt;system_task_enable&gt; 
				  	| ASSIGN &lt;assignment&gt;
				  	
				  	

&lt;assignment&gt; ::= &lt;lvalue&gt; = &lt;expression&gt;

&lt;blocking_assignment&gt; ::= &lt;lvalue&gt; = &lt;expression&gt;

&lt;nonblocking_assignment&gt; ::= &lt;lvalue&gt; &lt;= &lt;expression&gt;

&lt;case_item&gt; ::= &lt;expression&gt; &lt;expression_expanded&gt; : &lt;statement_or_null&gt; | default : &lt;statement_or_null&gt; | &lt;default statement_or_null&gt;

&lt;seq_block&gt; ::= : BEGIN &lt;statement_list&gt; END  
					| BEGIN : &lt;name_of_block&gt; &lt;block_declaration_list&gt; &lt;statement_list&gt; END
					
&lt;statement_list&gt; ::= : &lt;NULL&gt; 
						  | &lt;statement&gt; &lt;statement_list&gt;
						  
&lt;name_of_block&gt; ::= IDENTIFIER

&lt;block_declaration_list&gt; ::= : &lt;block_declaration&gt; &lt;block_declaration_list&gt; 
									| NULL
									
&lt;block_declaration&gt; ::= : &lt;reg_declaration&gt; 
							 | &lt;integer_declaration&gt; 
							 | &lt;real_declaration&gt;
							 


&lt;task_enable&gt; ::= : &lt;name_of_task&gt; 
					  | &lt;name_of_task&gt; ( &lt;expression&gt; &lt;expression_expanded&gt; ) ;

&lt;expression_expanded&gt; ::= , &lt;expression&gt; &lt;expression_expanded&gt; || NULL


&lt;system_task_enable&gt; ::= : &lt;name_of_system_task&gt; ; 
                         | &lt;name_of_system_task&gt; ( &lt;expression&gt; &lt;expression_expanded&gt; ) ;
							   

&lt;name_of_system_task&gt; ::= $ &lt;system_identifier&gt;

&lt;system_identifier&gt; ::= IDENTIFIER

# Expressions

&lt;lvalue&gt; -&gt; : IDENTIFIER 
            | IDENTIFIER [ &lt;expression&gt; ] 
            | IDENTIFIER [ &lt;expression&gt; : &lt;expression&gt; ] 
            | &lt;concatenation&gt;
            

&lt;constant_expression&gt; ::= &lt;expression&gt;

&lt;expression&gt; ::= : &lt;primary&gt; 
                 | &lt;UNARY_OPERATOR&gt; &lt;primary&gt; 
                 | &lt;expression&gt; &lt;BINARY_OPERATOR&gt; &lt;expression&gt; 
                 | &lt;expression&gt; ? &lt;expression&gt; : &lt;expression&gt; 
                 | STRING
                 

&lt;UNARY_OPERATOR&gt; ::=  : PLUS 
                      | MINUS 
                      | NOT 
                      | BAND 
                      | BNAND 
                      | BOR 
                      | BXOR 
                      | BNXOR
                      
                      
                      
&lt;BINARY_OPERATOR&gt; ::= : PLUS 
                      | MINUS 
                      | TIMES 
                      | DIV 
                      | MOD 
                      | EQ2 
                      | EQ3 
                      | NE2 
                      | NE3 
                      | LAND 
                      | LOR 
                      | LT 
                      | LE 
                      | GT 
                      | GE 
                      | BAND 
                      | BOR 
                      | BXOR 
                      | BXNOR 
                      | LSHIFT 
                      | RSHIFT
                      
                      
                      
&lt;STRING&gt; ::= "data in here"


&lt;primary&gt; ::= : NUMBER
              | IDENTIFIER 
              | IDENTIFIER [ &lt;expression&gt; ] 
              | IDENTIFIER [ &lt;constant_expression&gt; : &lt;constant_expression&gt; ] 
              | &lt;concatenation&gt; 
              | &lt;multiple_concatenation&gt; 
              | &lt;function_call&gt; 
              | ( &lt;expression&gt; )

&lt;concatenation&gt; ::= { &lt;expression&gt; &lt;expression_expanded&gt; }

&lt;multiple_concatenation&gt; ::= { &lt;expression&gt; { &lt;expression&gt; &lt;expression_expanded&gt; } }

&lt;function_call&gt; ::= : &lt;name_of_function&gt; ( &lt;expression&gt; &lt;expression_expanded&gt; ) 
                    | &lt;name_of_system_function&gt; ( &lt;expression&gt; &lt;expression_expanded&gt; ) 
                    | name_of_system_function
                    
&lt;name_of_function&gt; ::= IDENTIFIER

&lt;name_of_system_function&gt; ::= $ IDENTIFIER

# General

&lt;delay&gt; ::= : # NUMBER 
            | # IDENTIFIER


