# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2009 Jean Privat <jean@pryen.org>
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

import kernel

interface Inline__
	fun foo do 1.output
	fun bar: Int = 2
end

class A
	super Inline__
	redef fun bar do return 20
	fun baz do 3.output
end

class B
	super A
	redef fun foo do 100.output
	redef fun bar do return 200
	redef fun baz do 300.output
end

var a: A = new B
a.foo
a.bar.output
a.baz
