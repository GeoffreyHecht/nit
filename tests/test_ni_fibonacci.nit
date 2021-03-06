# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2011 Alexis Laferrière <alexis.laf@xymus.net>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

class FibonacciEngine
	fun fibonacci( n : Int ) : Int is extern import fibonacci
end

redef class Int
	fun fibonacci : Int is extern import fibonacci
end

var engine = new FibonacciEngine
print engine.fibonacci( 0 )
print engine.fibonacci( 1 )
print engine.fibonacci( 5 )
print engine.fibonacci( 12 )
# print engine.fibonacci( 123 )

print 0.fibonacci
print 1.fibonacci
print 5.fibonacci
print 12.fibonacci
# print 123.fibonacci
