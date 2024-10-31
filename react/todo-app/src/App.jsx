import { Header } from "./components/Header"
import { Tabs } from "./components/Tabs"
import { TodoInput } from "./components/TodoInput"
import { TodoList } from "./components/TodoList"


function App() {
  // const todos = [
  //   {input: 'Hello! Add your first todo!', complete: true},
  //   {input: 'learn react!', complete: false},
  //   {input: 'prepare for tests', complete: false},
  //   {input: 'practice code', complete: true}
  // ]
  
  const [todos, setTodos] = useState(
    [{input: 'Hello add your first todo', complete: true}])


  function handleAddTodo(newTodo) {
      const 
  }

  return (
    <div>

      <Header  todos={todos} />
      <Tabs todos={todos}/>
      <TodoList todos={todos}/>
      <TodoInput/>e

    </div>
    
  
  )
}

export default App
