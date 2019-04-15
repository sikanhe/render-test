module Counter = {
  [@react.component]
  let make = () => {
    let (count, setCount) = React.useState(() => 0);

    <div>
      {React.string("counter: " ++ string_of_int(count))}
      <button onClick={_ => setCount(c => c + 1)}> {React.string("+")} </button>
      <button onClick={_ => setCount(c => c - 1)}> {React.string("-")} </button>
    </div>;
  };
};

ReactDOMRe.renderToElementWithId(<Counter />, "root");